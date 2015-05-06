#include <iostream>
#include <initializer_list>
#include <string>
#include <vector>

#include <memory>

using namespace std;

template<typename T> class BlobPtr;
template<typename T> class Blob;
template<typename T>  bool operator == (const Blob<T>& b1, const Blob<T>& b2);


template<typename T> class Blob{
public:
    typedef T value_type;
    typedef typename std::vector<T>::size_type size_type;

    Blob();
    Blob(std::initializer_list <T> il);

    size_type size() const { return data->size(); }
    bool empty() const { return data->empty(); }

    void push_back(const T& t) { data->push_back(t); }
    void push_back(T &t) { data->push_back(move(t)); }
    void pop_back();

    T& back();
    T& operator[](size_type i);

public:
    friend class BlobPtr<T>;
    friend bool operator == (const Blob<T>, const Blob<T>);


private:
    std::shared_ptr<std::vector<T>> data;
    void check(size_type i, const string& msg) const;
};

template<typename T>
void Blob<T>::check(size_type i, const string &msg) const{
    if(i >= data->size())
        throw out_of_range(msg);
}

template<typename T>
T& Blob<T>::back(){
    check(0, "back on empty Blob");
    return data->back();
}

template<typename T>
T& Blob<T>::operator [](size_type i){
    check(0, "subscript out of range");
    return (*data)[i];
}

template<typename T>
void Blob<T>::pop_back(){
    check(0, "pop_back on empty Blob");
    data->pop_back();
}

template<typename T>
Blob<T>::Blob():data(make_shared<vector<T>>()){}

template<typename T>
Blob<T>::Blob(initializer_list<T> il): data(make_shared<vector<T>>(il)){}

int main(){

    Blob<int> squares = {0, 1, 1, 3, 4, 5, 6};
    for(size_t i = 0; i != squares.size(); ++i){
        squares[i] = squares[i] * squares[i];
    }

    return  0;
}



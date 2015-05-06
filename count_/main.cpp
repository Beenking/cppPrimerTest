#include <algorithm>
#include <iostream>
#include <vector>
#include <list>

using namespace std;

/* the generic function count test
int main(){
    std::vector<int> vi{1,2,3,4,1,2,3,4};
    auto n = std::count(vi.begin(), vi.end(), 3);
    std::cout << n << std::endl;
}*/

/* count string
int main(){
    vector<string> vs = {"this","is","a","count","funciton","test","It","is","a","good","function"};
    auto n = count(vs.begin(), vs.end(), "is");
    cout << n << endl;
}*/
/* accumulate int
int main(){
    vector<int> vi = {1,2,3,4,5};
    int sum = accumulate(vi.begin(), ++vi.begin()++, 0);
    cout << sum << endl;
}*/
/* accumulate double
int main(){
    vector<double> vi = {1.1,2,3,4,5};
    auto sum = accumulate(vi.cbegin(), ++vi.cbegin()++, 0.0);
    cout << sum << endl;
}*/
/* equal string/const char*
int main(){
    vector<const char*> vs = {"this","is","a","count","funciton","test","It","is","a","good","function"};
    list<const char*> ls = {"this","is","a","count","funciton","test","It","is","a","good","function","for","lenaring"};
    auto isequal = equal(vs.cbegin(), vs.cend(), ls.cbegin());
    cout << isequal << endl;
}*/
/* confused me
int main(){
    for(int i=0;i<1000000000;i++){
    const char c1[] = {'a','b','c'};
    const char c2[] = {'a','b','c'};
    bool b = c1==c2;
    if(b==1){
    cout << b << endl;}
    }
}*/
/* fill_n and vi.end()
int main(){
    std::vector<int> vi{1,2,3,4,1,2,3,4};
    auto it = fill_n(vi.begin(), vi.size(), 1);
    for(auto i:vi){
        std::cout << i << std::endl;
    }
    // after of the last iterator is 0
    cout << *it << endl;
    cout << *vi.end() << endl;
}*/
/*
int main(){
    list<int> li;
    vector<int> vi;

    int n;
    while(cin >> n){
        li.push_back(n);
    }
    copy(li.cbegin(),li.cend(),back_inserter(vi));

    for(auto i : vi){
        cout << i << endl;
    }
}*/
/*
int main(){
    list<int> li;
    vector<int> vi = {1,2,3,4,5,6,7};

    int n;
    while(cin >> n){
        li.push_back(n);
    }
    copy(li.cbegin(),li.cend(),vi.begin());

    for(auto i : vi){
        cout << i << endl;
    }
}*/
/*
void print(vector<string>& words){
    for(auto i : words){
        cout << i << " ";
    }
    cout << endl;
}

void elimDups(vector<string>& words){
    sort(words.begin(), words.end());
    print(words);

    auto end_unique = unique(words.begin(), words.end());
    print(words);

    words.erase(end_unique, words.end());
    print(words);
}

bool isShorter(const string &str1, const string &str2){
    return str1.size() < str2.size();
}

int main(){
    vector<string> vs = {"the","quick","red","fox","jumps","over","the","slow","red","turtle"};
    print(vs);
    elimDups(vs);
    stable_sort(vs.begin(), vs.end(), isShorter);
    print(vs);
}*/


template<typename T>
class Tcontainer{
public:
    virtual void push(const T&) = 0;
    virtual void pop() = 0;
    virtual size_t size() = 0;
    virtual const T& begin() = 0;
    virtual const T& end() = 0;
};

template<typename T>
class Tvector : public Tcontainer<T>{
public:
    Tvector(){
        _size = 0;
        _cap = 0;
        buff = NULL;
    }
    ~Tvector(){
        free(buff);
    }

    void re_capacity(size_t n){
        if(!buff){
            buff = (T*)malloc(sizeof(T)*n);
        }else{
            buff = (T*)realloc(buff, sizeof(T)*n);
        }
        _cap = n;
    }
    void push(const T &t){
        if(_size < _cap){
            buff[_size] = t;
            _size++;
        }else{
            re_capacity(_size + size_step);
            buff[_size] = t;
            _size++;
        }
    }
    void pop(){
        if(_size)
            _size--;
    }
    const T& begin(){
        return *buff;
    }
    const T& end(){
        return buff[_size-1];
    }
    size_t size(){
        return _size;
    }

    const T& operator [](size_t t){
        return buff[t];
    }

private:
    size_t _size ;
    size_t _cap;
    T *buff;
    static const int size_step = 2;
};

int main(){
    Tcontainer<int> *tv = new Tvector<int>;
    //Tvector<int> tv;
    tv->push(1);
    tv->push(2);
    tv->push(3);
    tv->push(3);
    tv->push(4);
    tv->push(5);


    tv->pop();

    //int a = *tv[1];
    int s = tv->size();
    int b = tv->begin();
    //tv.begin() = 9;
    //int c = (*tv)[0];

    int e = tv->end();
    //int f = tv->operator [](4);
    return 0;
}





















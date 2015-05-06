#include <iostream>
#include <vector>
#include <initializer_list>
#include <list>
#include <string>
#include <memory>
#include <stdexcept>

class StrBlob{
public:
    typedef std::vector<std::string>::size_type size_type;

    StrBlob();
    StrBlob(std::initializer_list<std::string> il);

    size_type size()const{
        return data->size();
    }
    bool empty()const{
        return data->empty();
    }
    void push_back(const std::string &t){
        data->push_back(t);
    }
    void pop_back();
    std::string& front();
    std::string& back();
    const std::string& front() const;
    const std::string& back() const;

private:
    std::shared_ptr<std::vector<std::string>> data;
    void check(size_type i,const std::string &msg)const;
};
// constructor functions
StrBlob::StrBlob(): data(std::make_shared<std::vector<std::string>>()){}
StrBlob::StrBlob(std::initializer_list<std::string> i1): data(std::make_shared<std::vector<std::string>>(i1)){}
// utility function
void StrBlob::check(size_type i, const std::string &msg) const{
    if(i >= data->size())
        throw std::out_of_range(msg);
}
// front functions
std::string& StrBlob::front(){
    check(0, "front on empty StrBlob");
    return data->front();
}
const std::string& StrBlob::front() const{
    check(0, "front on empty StrBlob");
    return data->front();
}
// back functions
std::string& StrBlob::back(){
    check(0, "back on empty StrBlob");
    return data->back();
}
const std::string& StrBlob::back() const{
    check(0, "back on empty StrBlob");
    return data->back();
}
// pop_back
void StrBlob::pop_back(){
    check(0, "pop_back on empty StrBlob");
    data->pop_back();
}


int main(){
    StrBlob sb{"abc", "wang", "bin", "gggg"};
    const StrBlob sb2 = sb;
    sb.front() = "111";
    //sb2.front() = "222";
    return 0;
}

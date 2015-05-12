#include <iostream>
#include <string>

using namespace std;

class HasPtr{
public:
    HasPtr(const string &s = string(), int i=0):_ps(new string(s)),_i(i){}
    HasPtr(const HasPtr &hp){
        _ps = new string(*hp._ps);
        _i = hp._i;
    }
    HasPtr& operator= (const HasPtr &hp){
        auto newp = new string(*hp._ps);
        delete _ps;
        _i = hp._i;
        return *this;
    }

    ~HasPtr(){delete _ps;}

private:
    string *_ps;
    int _i;
};

int main(){
    string s1 = "wangsss";
    string s2 = "bin";
    HasPtr hp1(s1, 1);
    HasPtr hp2(s2, 2);
    HasPtr hp3(hp1);
    hp1 = hp2;

    return 0;
}

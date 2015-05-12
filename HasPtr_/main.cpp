#include <iostream>
#include <string>
#include <memory>

using namespace std;

class HasPtr{
public:
    HasPtr(const string &s, int i = 0) : _ps(make_shared<string>(s)), _i(i){}

private:
    std::shared_ptr<string> _ps;
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

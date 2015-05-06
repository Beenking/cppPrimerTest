#include <string>
#include <iostream>
using namespace std;

int main(){
    std::string str;
    std::getline(cin, str, ';');
    std::string::size_type len = str.size();

    decltype(str.size()) count_ = 0;

    cout << len << endl;
    cout << str << endl;

    return 0;
;}

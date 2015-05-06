#include <iostream>
#include <stack>
#include <map>

using namespace std;

bool isValid(const string& str){
    stack<char> s;
    pair<char,char> m1(')','('), m2(']','['), m3('}','{');
    map<char,char> m{m1, m2, m3};

    if(str.empty()){
        return true;
    }
    for(char c : str){
        if(c == '(' || c == '[' || c == '{'){
            s.push(c);
        }else if(s.empty() || m[c] == s.top()){
            s.pop();
        }else{
            return false;
            }
        }
    if(!s.empty()){
        return false;
    }
    return true;
}

int main(){
    string s = "(([)])){}";
    bool b = isValid(s);

    cout << b <<endl;
    return 0;
}

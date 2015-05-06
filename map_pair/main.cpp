#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main(){


    map<string, size_t> word_count;
    string str;
    while(cin >> str){
        ++word_count[str];
    }
    for(auto p : word_count){
        cout << p.first << " occurs " << p.second << (p.second > 1 ? " times":" time") << endl;
    }
    return 0;
}

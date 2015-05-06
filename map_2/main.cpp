#include <iostream>
#include <map>
#include <set>

using namespace std;
/*
set<string> test1(){
    return {"this","is","a","test"};
}

set<int> test2(){
    return {1,10,2,20,4};
}

int main(){
    set<string> s1 = test1();
    set<int> s2 = test2();


    return 0;
}*/

int main(){
    map<string,size_t> word_count;

    string word;
    while( cin >> word ){
        auto ret = word_count.insert({word,1});
        if(!ret.second){
            ++word_count[word]; // ++ret.first->second;
        }
    }
    for(auto m : word_count){
        cout << m.first << " " << m.second << endl;
    }
    cout << endl;
}








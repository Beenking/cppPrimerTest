#include <iostream>
#include <fstream>
#include <map>
#include <vector>
#include <set>

using namespace std;
/*
int main(){
    map<string, size_t> word_count;
    string word;
    while(cin >> word){
        ++word_count[word];
    }
    for(const auto &w : word_count){
        cout << w.first << " occurs " << w.second << (w.second > 1 ? " times":" time") << endl;
    }
}*/
/*
ifstream input("test.txt");
int main(){
    map<string, size_t> word_count;
    map<string, size_t>::value_type vt = {"www", 3};
    word_count[vt.first] = vt.second;
    set<string> exclude = {"the", "a", "an", "A", "An", "The"};

    string word;
    while(input >> word){
        if(exclude.find(word) == exclude.end()){
            ++word_count[word];
        }
    }
    for(const auto &w : word_count){
        cout << w.first << " occurs " << w.second << (w.second > 1 ? " times":" time") << endl;
    }
    for(const auto e : exclude){
        cout << e << " ";
    }
    cout << endl;
}*/


/*
int main(){
    set<string> exclude = {"a", "an", "the"};
    map<string,long> phoneNum = {{"wangbin",635657}, {"zhangsan",243434}, {"xiaowu",123343}};
    long l = phoneNum["wangbin"];
    auto a = phoneNum.at("xiaowu");
    auto p = (*phoneNum.begin()).first;
    auto e = exclude.find("a");
    return 0;
}*/
/*
#include <vector>
int main(){
    vector<int> vi;
    for(vector<int>::size_type i=0; i<10; i++){
        vi.push_back(i);
        vi.push_back(i);
    }
    set<int> iset(vi.begin(), vi.end());
    multiset<int> miset(vi.begin(), vi.end());

    cout << vi.size() << endl;
    cout << iset.size() << endl;
    cout << miset.size() << endl;
    return 0;
}*/


int main(){
    vector<string> vs = {"this", "is", "a", "test","a"};
    multiset<string> ms = {"ok", "good", "better", "best"};

    //copy(vs.begin(), vs.end(), inserter(ms, ms.end()));
    // ! there is no member push_back in multiset.
    //copy(vs.begin(), vs.end(), back_inserter(ms));
    //copy(ms.begin(), ms.end(), inserter(vs, vs.end()));
    copy(ms.begin(), ms.end(), back_inserter(vs));

    for(auto i : vs){
        cout << i << " ";
    }
    cout << endl;
    for(auto i : ms){
        cout << i << " ";
    }
    cout << endl;

    return 0;
}















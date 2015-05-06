#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;

bool BST_find(vector<string> vs, const string s){
    auto iter1 = vs.cbegin(), iter2 = vs.cend();
    auto itmid = iter1 + (iter2 - iter1)/2;

    while(itmid != iter2 && *itmid != s){
        if(*itmid > s){
            iter2 = itmid;
        }else{
            iter1 = itmid + 1;
        }
        itmid = iter1 + (iter2 - iter1)/2;
    }
    if(itmid == iter2){
        return false;
    }else
        return true;
}

int main(){
    set<string> ss = {"abc", "wang", "bin", "dde", "good", "start", "what", "why", "few"};
    vector<string> vs(ss.begin(), ss.end());
    bool result = BST_find(vs, "wang");
    cout << result << endl;

    return 0;
}

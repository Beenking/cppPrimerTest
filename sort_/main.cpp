#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool isShort(const string& s1, const string& s2){
    if(s1.size() < s2.size())
        return true;
    else
        return false;
}

int main(){
    vector<string> vs{"I", "like", "C++", "very much", "did", "you", "agree", "it", "?"};
    sort(vs.begin(), vs.end(), isShort);

    for(auto v : vs){
        cout << v << " ";
    }
    cout << endl;
}

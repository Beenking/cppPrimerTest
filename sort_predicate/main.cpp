#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool isShorter(const string &s1, const string &s2){
    return s1.size() < s2.size();
}

bool lenmore3(const string &s){
    return s.size() > 3;
}

void print(const vector<string> vs){
    for(const auto i : vs)
        cout << i << " ";
    cout << endl;
}

int main(){
    vector<string> vs{"wang", "bin", "is", "a", "student", "you", "are", "right"};
    sort(vs.begin(), vs.end());
    print(vs);

    sort(vs.begin(), vs.end(), isShorter);
    print(vs);

    auto iter = find_if(vs.begin(), vs.end(), lenmore3);
    for(; iter != vs.end(); ++iter){
        cout << *iter << " ";
    }
    cout << endl;
    return 0;
}

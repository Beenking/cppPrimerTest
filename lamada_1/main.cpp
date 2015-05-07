#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void print(const vector<string> vs){
    for(const auto i : vs)
        cout << i << " ";
    cout << endl;
}

int main(){
    vector<string> vs{"wang", "bin", "is", "a", "student", "you", "are", "right"};
    sort(vs.begin(), vs.end());
    print(vs);

    sort(vs.begin(), vs.end(),
         [](const string &a, const string &b){return a.size() < b.size();});
    print(vs);

    const uint length = 4;
    auto iter = find_if(vs.begin(), vs.end(),
                        [length](const string &s){return s.size() >= length;});
    for_each(iter, vs.end(),
             [](const string &s){cout << s << " ";});
    cout << endl;
    return 0;
}

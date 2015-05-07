#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>

using namespace std;
using std::placeholders::_1;

void print(const vector<string> vs){
    for(const auto i : vs)
        cout << i << " ";
    cout << endl;
}

bool lenmore(const string &s1, size_t sz){
    return s1.size() >= sz;
}

int main(){
    vector<string> vs{"wang", "bin", "is", "a", "student", "you", "are", "right"};
    sort(vs.begin(), vs.end());
    print(vs);

    sort(vs.begin(), vs.end(),
         [](const string &a, const string &b){return a.size() < b.size();});
    print(vs);

    const uint length = 4;
    // auto newCallable = bind(callable, arg_list);
    //auto newCallable = bind(lenmore, _1, length);
    auto iter = find_if(vs.begin(), vs.end(), bind(lenmore, _1, length));
    for_each(iter, vs.end(),
             [](const string &s){cout << s << " ";});
    cout << endl;
    return 0;
}

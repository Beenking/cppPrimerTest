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
    auto add = [](int a, int b){return a+b;};
    auto result = add(2, 3);
    cout << result << endl;
    return 0;
}

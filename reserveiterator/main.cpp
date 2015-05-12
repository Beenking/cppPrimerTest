#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>

using namespace std;

void print(const vector<int> vs){
    for(const auto i : vs)
        cout << i << " ";
    cout << endl;
}

int main(){
    vector<int> vi{1, 2, 3, 4, 5, 6, 7, 0};
    for(auto rit = vi.rbegin(); rit != vi.rend(); ++rit)
        cout << *rit << " ";
    cout << endl;

    sort(vi.rbegin(), vi.rend());
    print(vi);

    return 0;
}

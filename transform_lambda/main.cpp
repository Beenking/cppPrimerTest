#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void print(const vector<int> vs){
    for(const auto i : vs)
        cout << i << " ";
    cout << endl;
}

int main(){
    vector<int> vi{1, 2, 3, -1, -2, -3};
    const int more = 3;
    transform(vi.begin(), vi.end(), vi.begin(),
              [](int i){return 2*(i);});
    auto num = count_if(vi.begin(), vi.end(),
             [more](int i){return i >= more;});
    cout << num << endl;
    print(vi);

    return 0;
}

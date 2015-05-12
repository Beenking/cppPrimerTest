#include <iostream>
#include <algorithm>
#include <list>
#include <vector>
#include <iterator>

using namespace std;

void print(const vector<int> vs){
    for(const auto i : vs)
        cout << i << " ";
    cout << endl;
}

int main(){
    vector<int> vi{1,2,3,4,5};
    back_insert_iterator<vector<int>> bi(vi);
    //auto bi = back_inserter(vi);
    *bi = 6;

    print(vi);

    return 0;
}

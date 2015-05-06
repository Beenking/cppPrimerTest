#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main(){
    int ia[] = {0,1,2,3,4,5,6,7,8,9};
    vector<int> vi = {0,1,2,3,4,5,6,7,8,9};
    auto iter1 = find(vi.begin(), vi.end(), 8);
    int* iter2 = find(begin(ia), end(ia), 8);
    auto n = count(vi.begin(), vi.end(), 3);

    int s = accumulate(begin(ia), end(ia), 0);


    int i = 3;
    int a[i];
    *a = 1;
    *(a+1) = 2;
    *(a+2) = 3;


    cout << *iter1 << " " << *iter2 << " " << n <<
            " " << s << " " << a[2] << endl;
    return 0;
}

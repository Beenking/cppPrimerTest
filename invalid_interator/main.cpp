#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> vi{0,1,2,3,4,5,6,7,8,9};
    auto iter1 = vi.begin();
    auto inter2 = vi.begin() + 4;
    auto inter3 = vi.end() - 2;
    auto inter4 = inter2 + 2;
    inter2 = vi.insert(inter2, 3);

    int temp0 = *inter2;
    int temp1 = *inter3;
    int temp2 = *inter4;
    cout << temp0 << " " << temp1 << " " << temp2 << endl;
    return 0;
}

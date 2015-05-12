#include <iostream>

using namespace std;

int main(){
    const int c = 2;
    int *p = const_cast<int*>(&c);
    *p = 3;
    cout << c << endl;
}

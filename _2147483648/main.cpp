#include <iostream>

using namespace std;

int main(){
    int i1 = 2147483647; // int

    int i2 = 2147483648; // uint -> int
    int i3 = -2147483648;

    int i4 = 2147483649;
    int i5 = -2147483649;

    unsigned int a = 3;
    auto b = -a;

    //cout << (-a > 0) << endl;

    int c = 97;
    char *p = (char*)&c;
    char c1 = p[0], c2 = p[1], c3 = p[2], c4 = p[3];

    cout << c3 << endl;
    return 0;
}

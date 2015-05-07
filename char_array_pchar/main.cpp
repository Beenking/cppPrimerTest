#include <iostream>

using namespace std;

int main()
{

    int a = 2;
    int *p = &a;
    const char *c1 = "x2cd";
    const char *c2 = "ABC";
    int b = 3;

    cout << &a << endl << &b << endl << &c1 << endl << c1 << endl;
    cout << (int*)c1 << endl << (int*)c2 << endl;

    const int i = 3;
    int *pi = &i;
    *pi = 4;
}

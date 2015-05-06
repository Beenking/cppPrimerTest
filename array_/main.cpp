#include <iostream>

using namespace std;

int main(){
    int n = 3;

    int i = 0;
    cout << i << ++i << endl;


    int *p = &n;
    int a[3] = {1,2,3};
    int *e = &a[3];
    int *e1 = &a[4];
    int *e2 = e + 1;
    int b[3] = {2,2,2};
    auto b2 = b;
    //char ch[5] = "wangb";
    //b = a;
    cout << b[0];

    return 0;
}

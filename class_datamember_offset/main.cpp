#include <iostream>

using namespace std;

class A{
public:
    int x = 0;
    int y = 1;
    int z = 2;
};

class B : public A{
public:
    int m = 3;
    int n = 4;
};

int main(){
    A a;
    B b;
    auto s = sizeof(A);
    //auto d = &a + (&A::y - 1);

    cout << s << endl << &a << endl << &a.x << endl << &a.y << endl << &a.z << endl /*<< d << endl*/;
    cout << endl;
    cout << sizeof(B) << endl << &b.x << endl << &b.y << endl << &b.z << endl << &b.m << endl << &b.n << endl;
}

#include <iostream>
using namespace std;

class B{
public:
    int ib = 1;
    char cb = '1';
    virtual void f(){cout << "B::f()" << endl;}
    virtual void Bf(){cout << "B::Bf()" << endl;}
};
class B1 : public B{
public:
    int ib1 = 2;
    char cb1 = '2';
    virtual void f(){cout << "B1::f()" << endl;}
    virtual void f1(){cout << "B1::f1()" << endl;}
    virtual void Bf1(){cout << "B1::Bf1()" << endl;}
};
class B2 : public B{
public:
    int ib2 = 3;
    char cb2 = '3';
    virtual void f(){cout << "B1::f()" << endl;}
    virtual void f2(){cout << "B1::f2()" << endl;}
    virtual void Bf2(){cout << "B1::Bf2()" << endl;}
};
class D : public B1, public B2{
public:
    int id = 4;
    char cd = '4';
    virtual void f(){cout << "D::f()" << endl;}
    virtual void f1(){cout << "D::f1()" << endl;}
    virtual void f2(){cout << "D::f2()" << endl;}
    virtual void Df(){cout << "D::Df()" << endl;}
};

typedef void (*Fun)(void);

int main(){
    D d;
    for(int i = 0; i < sizeof(D)/4; ++i){
        cout << *((int*)&d+i) << endl;
    }
    cout << *(char*)((int*)&d+11) << endl;
}
















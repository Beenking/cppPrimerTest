#include <iostream>
using namespace std;

class Base{
public:
    virtual void f(){cout << "Base::f" << endl;}
    virtual void g(){cout << "Base::g" << endl;}
    virtual void h(){cout << "Base::h" << endl;}
};

class Derive : public Base{
    virtual void f(){cout << "Derived::f" << endl;}
    virtual void g1(){cout << "Derived::g1" << endl;}
    virtual void h1(){cout << "Derived::h1" << endl;}
};

int main(){
    cout << sizeof(Derive) << endl;

    typedef void(*Fun)(void);
    Base b;
    Derive d;
    Fun pFun1 = NULL,pFun2 = NULL, pFun3 = NULL;
    cout << "virtual table address: " << (int*)(&b) << endl;
    cout << "the first function of vtbl: " << (int*)*(int*)(&b) << endl;

    pFun1 = (Fun)*((int*)*(int*)(&d));
    pFun1();
    pFun2 = (Fun)*((int*)*(int*)(&d)+1);
    pFun2();
    pFun3 = (Fun)*((int*)*(int*)(&d)+3);
    pFun3();
    cout << endl;
    cout << *((int*)*(int*)(&b)+3);
}

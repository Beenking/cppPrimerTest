#include <iostream>
using namespace std;

class Base1{
public:
    virtual void f(){cout << "Base1::f" << endl;}
    virtual void g(){cout << "Base1::g" << endl;}
    virtual void h(){cout << "Base1::h" << endl;}
};

class Base2{
public:
    virtual void f(){cout << "Base2::f" << endl;}
    virtual void g(){cout << "Base2::g" << endl;}
    virtual void h(){cout << "Base2::h" << endl;}
};

class Derive : public Base1, public Base2{
    virtual void f(){cout << "Derived::f" << endl;}
    virtual void g1(){cout << "Derived::g1" << endl;}
    virtual void h1(){cout << "Derived::h1" << endl;}
};

int main(){
    cout << sizeof(Derive) << endl;

    typedef void(*Fun)(void);
    Base1 b, *pb;
    Derive d;
    Fun pFun1 = NULL,pFun2 = NULL, pFun3 = NULL;
    cout << "virtual table address: " << (int*)(&b) << endl;
    cout << "the first function of vtbl: " << (int*)*(int*)(&b) << endl;

    pFun1 = (Fun)*((int*)*(int*)(&d));
    pFun1();
    pFun2 = (Fun)*((int*)*((int*)(&d)+1));
    pFun2();
    pFun3 = (Fun)*((int*)*((int*)(&d)+1)+1);
    pFun3();
    cout << endl;
    cout << *((int*)*(int*)(&b)+3);

    pb->
}









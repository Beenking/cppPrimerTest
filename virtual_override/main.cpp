#include <iostream>
using namespace std;

class B{
public:
    int ib = 0;
    int cb = 'B';
    virtual void f(){cout << "B::f()" << endl;}
    virtual void Bf(){cout << "B::Bf()" << endl;}
};
class B1 : virtual public B{
public:
    int ib1 = 11;
    int cb1 = '1';
    virtual void f(){cout << "B1::f()" << endl;}
    virtual void f1(){cout << "B1::f1()" << endl;}
    virtual void Bf1(){cout << "B1::Bf1()" << endl;}
};
class B2 : virtual public B{
public:
    int ib2 = 12;
    int cb2 = '2';
    virtual void f(){cout << "B2::f()" << endl;}
    virtual void f2(){cout << "B2::f2()" << endl;}
    virtual void Bf2(){cout << "B2::Bf2()" << endl;}
};

class D : public B1, public B2{
public:
    int id = 100;
    char cd = 'D';
    virtual void f(){cout << "D::f()" << endl;}
    virtual void f1(){cout << "D::f1()" << endl;}
    virtual void f2(){cout << "D::f2()" << endl;}
    virtual void Df(){cout << "D::Df()" << endl;}

};

typedef void(*Fun)(void);

int main(){
    D d;

    int** vptr = (int**)&d;
    //cout << sizeof(D) << endl;

    for(int i = 0; i < sizeof(D)/4; ++i){
        cout << *((int*)&d + i) << endl;
    }
    cout << endl;
    for(int i = 0; i < 5; ++i){
        ((Fun)vptr[3][i])();
    }


}





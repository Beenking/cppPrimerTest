#include <iostream>
using namespace std;

class Base1{
public:
    int ibase1 = 10;
    virtual void f(){cout << "Base1::f()" << endl;}
    virtual void g(){cout << "Base1::g()" << endl;}
    virtual void h(){cout << "Base1::h()" << endl;}
};
class Base2{
public:
    int ibase2 = 10;
    virtual void f(){cout << "Base2::f()" << endl;}
    virtual void g(){cout << "Base2::g()" << endl;}
    virtual void h(){cout << "Base2::h()" << endl;}
};
class Base3{
public:
    int ibase3 = 10;
    virtual void f(){cout << "Base3::f()" << endl;}
    virtual void g(){cout << "Base3::g()" << endl;}
    virtual void h(){cout << "Base3::h()" << endl;}
};
class Derive : public Base1, public Base2, public Base3{
    int iderive = 100;
    virtual void f(){cout << "Derive::f()" << endl;}
    virtual void g1(){cout << "Derive::g1()" << endl;}
};

typedef void(*Fun)(void);

int main(){
    Derive d;
    int** vptr = (int**)&d;
    for(int i = 0; i < 4; ++i){
        ((Fun)vptr[0][i])();
    }
    cout << ((Fun)vptr[0][4]) << endl;
    cout << (int)vptr[1] << endl;

    int s1 = sizeof(Base1)/4;
    for(int i = 0; i < 3; ++i){
        ((Fun)vptr[s1][i])();
    }
    cout << ((Fun)vptr[0][3]) << endl;
    cout << (int)vptr[s1+1] << endl;

    int s2 = s1 + sizeof(Base2)/4;
    for(int i = 0; i < 3; ++i){
        ((Fun)vptr[s2][i])();
    }
    cout << ((Fun)vptr[0][3]) << endl;
    cout << (int)vptr[s2+1] << " " << (int)vptr[s2+2] << endl;

    cout << endl << endl;
    for(int i = 0; i < sizeof(Derive)/4; ++i){
        cout <<  *(vptr+i) << endl;
    }
}














































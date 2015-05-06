#include <iostream>
using namespace std;

class Parent{
public:
    virtual void f(){cout << "Parent::f" << endl;}
    virtual void g(){cout << "parent::g" << endl;}
    virtual void h(){cout << "Parent::h" << endl;}
    int iParent;
};

class Child : public Parent{
    virtual void f(){cout << "Child::f" << endl;}
    virtual void g_child(){cout << "Child::g_child" << endl;}
    virtual void h_child(){cout << "Child::h_child" << endl;}
    int iChild;
};

class GrandChild : public Child{
    virtual void f(){cout << "GrandChild::f" << endl;}
    virtual void g_child(){cout << "GrandChild::g_child" << endl;}
    virtual void h_grandchild(){cout << "GrandChild::h_grandchild" << endl;}
    int iGrandChild;
};

typedef void(*Fun)(void);

int main(){
    GrandChild gc;
    int** vptr = (int**)&gc;
    for(int i = 0; i < 6; ++i){
        ((Fun)vptr[0][i])();
    }
    cout << sizeof(Parent) << " " << sizeof(Child) << " "
         << sizeof(GrandChild) << endl;

}

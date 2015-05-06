#include <iostream>

using namespace std;
class A{
    char * c1;
    virtual void fun();
};

class B : public virtual A{
    virtual void fun2();
};

int main(){
    cout << sizeof(A) << endl << sizeof(B) << endl;
}

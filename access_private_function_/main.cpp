#include <iostream>
using namespace std;

class Base {

    private:

            virtual void f() { cout << "Base::f" << endl; }



};



class Derive : public Base{



};



typedef void(*Fun)(void);



int main() {

    Derive d;
    int** pvtbl = (int**)&d;


    //Fun  pFun = (Fun)*((int*)*(int*)(&b)+0);
    Fun pFun = (Fun)pvtbl[0][0];

    pFun();

}

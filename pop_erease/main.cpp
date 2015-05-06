#include <iostream>
#include <list>

using namespace std;

class A{
public:
    A(){cout << "A constructor called" << endl;}
    ~A(){ cout << "A destructor called" << endl;}
};

int main(){

    list<A> alist{A(), A(), A()};
    alist.erase(alist.begin());

    int m = 3, n = 2;
    int sum = m + n;
    cout << sum << endl;
    return 0;
}

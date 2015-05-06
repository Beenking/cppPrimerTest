#include <iostream>
using namespace std;

class X{};
class Y : virtual public X{};
class Z : virtual public X{};
class A : public Y, public Z {};

int main(){
    int a = sizeof(X);
    int b = sizeof(Y);
    int c = sizeof(Z);
    int d = sizeof(A);

    cout << a << " " << b << " " << c << " " << d << endl;

}

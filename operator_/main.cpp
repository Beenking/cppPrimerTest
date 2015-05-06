#include <iostream>
#include <cmath>

using namespace std;

int main(){
    unsigned char bits = 0233;
    auto b1 = bits << 8;
    auto b2 = bits << 31;
    auto b3 = bits >> 3;

    int p = pow(2, 27);

    unsigned long quiz = 0;
    unsigned long lul = 1;
    quiz |= lul << 27;
    quiz |= lul << 1;

    quiz &= ~(lul << 27);

    bool state = quiz & (lul << 1);

    int a = 3, b = 2;
    int c = (a , b);
    cout << c << endl;

    //cout << b1 << " " << b2 << " " << b3 << endl;

    return 0;
}

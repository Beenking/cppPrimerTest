#include <iostream>

using namespace std;

int main(){
    /*auto a = 2.5 + 2.5 + 1;
    cout << a << endl;

    bool b = -1;
    cout << b << endl;*/

    if (-2147483648 > 0)
        std::cout << "true"; // print true
    else
        std::cout << "false";

    auto i = -(int)2147483648;
    cout << i << endl;

    cout << sizeof(int)<< " " << sizeof(long)<< " " << sizeof(long int) << endl;

    return 0;
}

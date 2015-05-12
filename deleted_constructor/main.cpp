#include <iostream>

using namespace std;

class Nocopy{
    const int a = 3;
};

int main(){
    Nocopy no1;
    Nocopy no2;
    no2 = no1; // deleted operator=
    return 0;
}

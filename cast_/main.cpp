#include <iostream>

using namespace std;

int main(){
    int i = 3, j = 2;
    double slope = i/j;

    char *pc = "wang";
    char *p2 = "bin";
    char p3[] = "is";
    cout << &i << " " << &j << " " << &pc << " " << &p3 << " " << (int*)*(&pc) << " " << (int*)*(&p2) << " " << (int*)*&p3 << endl;
    char *p = const_cast<char*>(pc);
    p[0] = 'b';

    return 0;
}

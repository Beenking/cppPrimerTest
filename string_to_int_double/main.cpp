#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){
    int a = pow(2, 31);
    int i1 = 101;
    int i2 = 2147483647;
    double d1 = 0.124;
    double d2 = 14233.44323;

    string s1 = to_string(i1);
    string s2 = to_string(i2);
    string s3 = to_string(d1);
    string s4 = to_string(d2);

    int ii1 = stoi(s1);
    int ii2 = stoi(s2);
    auto dd1 = stod(s3);
    auto dd2 = stod(s4);

    return 0;
}

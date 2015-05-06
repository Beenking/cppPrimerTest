#include <iostream>
#include <string>

using namespace std;

class Sales_data{

};

template <typename T>
int compare(const T& v1, const T& v2){
    if(v1 < v2) return -1;
    if(v1 > v2) return 1;
    return 0;
}

template<unsigned N, unsigned M>
int compare(const char (&p1)[N], const char (&p2)[M]){
    return p1 < p2;
}

int main(){

    compare("hi", "mom");

    return 0;
}

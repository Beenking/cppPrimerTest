#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

int main(){

    char string[10];
    char str1[] = "0123456789";
    strcpy( string, str1 );

    cout << string << endl;
    return 0;
}

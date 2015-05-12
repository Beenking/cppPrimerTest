#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

char *GetMemory(void){

    char p[] = "hello world";

    return p;

}

int main(void){

    char *str = NULL;

    str = GetMemory();

    static char *sss = str;
    cout << sss << endl;
    return 0;
}

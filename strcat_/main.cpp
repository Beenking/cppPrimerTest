#include <iostream>
#include <stdexcept>
#include <string.h>

using namespace std;

char* mystrcat(char *dest, const char *src){
    char *pd = dest;
    for(; *pd; ++pd)
        ;
    while(*pd++ = *src++)
        ;
    return dest;
}

int main(){
    const char *src = "stupid";
    char dest[20] = "are you ";
    mystrcat(dest, src);

    cout << dest << endl;
    return 0;
}

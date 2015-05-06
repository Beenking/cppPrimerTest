#include <iostream>

using namespace std;


int power2n(int n){
    if(n==1)
        return 2;
    else{
        return 2*power2n(n-1);
    }
}

int main(){
    int n = 31;
    int s = power2n(n);
    cout << s << endl;
}

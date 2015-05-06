#include <iostream>

using namespace std;

int fib(int n){
    if (n==1) return 1;
    if (n==2) return 2;

    int x__ = 1;
    int x_ = 2;

    int x = 0;
    for(int i=3;i<=n;++i){
        x = x__+x_;
        if(x>=19999997)
            x%=19999997;
        x__ = x_;
        x_ = x;
    }
    return x;
}

int fib2(int n){
    if(n==1) return 1;
    if(n==2) return 2;
    return fib2(n-1)+fib2(n-2);
}


int main(){
    int in;
    cin >> in;
    cout << fib(in) << endl;


}

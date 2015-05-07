#include <iostream>
#include <cstdlib>

#include <random>

using namespace std;

int rand50(){
    return rand()%100 - 50;
}

int main(){
    for(int i = 0; i < 10; ++i){
        int x = rand50();
        int y = rand50();
        cout << x << " " << y << endl;
    }
    cout << endl;

    default_random_engine e;
    for(int i = 0; i < 10; ++i){
        auto a = e()%100 - 50; // unsigned int
        auto b = e()%100 - 50;
        cout << (int)a << " " << (int)b << endl;
    }

    cout << endl;
    cout << e.min() << " " << e.max() << endl;
    return 0;
}

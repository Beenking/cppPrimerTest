#include <iostream>
#include <deque>
#include <list>
#include <cmath>

using namespace std;

int main(){
    //list<int> ilist;
    deque<int> iqueue;
    for(int i = 0; i < 10; ++i){
        iqueue.push_front(i);
        iqueue.push_back(i);
        cout << &iqueue << endl;
    }
    for(int i : iqueue){
        cout << i << endl;
    }
    //cout << address << endl;
    cout << iqueue[0] << " " << iqueue[5] << endl;
}

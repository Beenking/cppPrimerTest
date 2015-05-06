#include <iostream>
#include <list>
#include <forward_list>

using namespace std;

int main(){
    forward_list<int> fli = {0,1,2,3,4,5,6,7,8,9};

    auto pre = fli.before_begin();
    auto cur = fli.begin();
    while(cur != fli.end()){
        if(*cur % 2){
            cur = fli.erase_after(pre);
        }else{
            pre = cur;
            ++cur;
        }
    }
    for(auto i : fli){
        cout << i << endl;
    }
}

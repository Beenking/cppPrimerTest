#include <iostream>
#include <vector>
#include <forward_list>
#include <stack>

using namespace std;

int main(){
    string expr = string("this is (prezy) and (oxcy) over");
    string repl = "replaced";

    stack<char> stck;
    for(const char i : expr){
        if(i != ')'){
            stck.push(i);
        }else{
            while(stck.top() != '('){
                stck.pop();
            }
            stck.pop();
            for(auto c : repl){
                stck.push(c);
            }
        } //else
    } //for

    // present the result
    forward_list<char> flc;
    while(!stck.empty()){ // insert before head
        flc.push_front(stck.top());
        //flc.insert_after(flc.before_begin(), stck.top());
        stck.pop();
    }
    for(auto i : flc){
        cout << i;
    }
    cout << endl;
    return 0;
}

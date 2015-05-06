#include <memory>
#include <iostream>

using namespace std;

int main(){
    auto pi = new int;
    *pi = 2;

    shared_ptr<int> p1 = make_shared<int>(4);
    *p1 = 5;


    auto p2 = make_shared<string>("test");
    *p2 = "cpp";
    //cout << p2->usecount << endl;
    auto p3 = p2;
    auto p4(p2);
    //auto p5 = make_shared<string>(p2);
    p2->empty();


    return 0;
}

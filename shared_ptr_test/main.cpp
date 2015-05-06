#include <memory>
#include <iostream>

using namespace std;

int main(){
    shared_ptr<int> p = make_shared<int>(42);
    auto q(p);

    auto r = make_shared<int>(43);
    q = r;
    return 0;
}

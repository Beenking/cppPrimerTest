#include <iostream>
#include <map>
#include <set>

using namespace std;

int main(){
    pair<string, int> p1("text", 1);
    map<string, int>::value_type p2("text", 1);
    p1.first = "modify";
    //p2.first = "modify";

    return 0;
}

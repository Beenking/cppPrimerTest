#include <iostream>
#include <string>

using namespace std;

int main(){
    const string str("Hello World!!!");

    string sl;
    cout << sl[0] << endl;
    for(auto &c : str)
        c = (char)toupper(c);

}

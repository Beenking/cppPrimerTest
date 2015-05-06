#include <iostream>
#include <string>
#include <list>

using namespace std;

int main(){
    list<string> slist;
    list<string>::iterator iter = slist.begin();
    string word;
    while(cin >> word)
        iter = slist.insert(iter, word);

    for(auto w : slist){
        cout << w << endl;
    }
    if (slist.begin() == slist.end())
        cout << "  ...  " << endl;

    return 0;
}

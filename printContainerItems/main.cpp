#include <iostream>
#include <vector>

using namespace std;

template<typename T>
void printContainerItem(const vector<T>& vt) {
    for(typename vector<T>::size_type i = 0; i < vt.size(); ++i){
        cout << vt[i] << " ";
    }
    cout << endl;
}

template<typename T>
void printContainerItem2( vector<T> &vt) {
    for(auto iter = vt.begin(); iter != vt.end(); ++iter){
        cout << *iter << " ";
    }
    cout << endl;
}

int main(){
    vector<int> vi = {1,2,3,4,5,1,2,3};
    vector<string> vs = {"wang", "bin", "is", "a", "student"};
    printContainerItem2(vi);
    printContainerItem2(vs);
}

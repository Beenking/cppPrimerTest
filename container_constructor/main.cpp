#include <iostream>
#include <deque>
#include <vector>

using namespace std;

class TEST{
public:
    TEST(){ cout << "default constructor" << endl;}
    TEST(const TEST&){ cout << "copy constructor" << endl;}

    ~ TEST(){ cout << "deconstructor function" << endl;}
};

int main(){
    /*
    TEST t1, t2, t3, t4;
    //vector<TEST> vt{t1, t2};
    vector<TEST> vt;
    cout << vt.size() << " " << vt.capacity() << endl;

    vt.push_back(t1);
    cout << vt.size() << " " << vt.capacity() << endl;

    vt.push_back(t2);
    cout << vt.size() << " " << vt.capacity() << endl;

    vt.push_back(t3);
    cout << vt.size() << " " << vt.capacity() << endl;

    vt.push_back(t4);
    cout << vt.size() << " " << vt.capacity() << endl;*/

    TEST t1, t2;
    //TEST vt[] = {t1, t2, t3, t4, t5};
    vector<TEST> vt{t1, t2}; // a temp vector

    return 0;
}

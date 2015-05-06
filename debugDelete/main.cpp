#include <iostream>

using namespace std;

class DebugDelete {
public:
    DebugDelete(std::ostream& s = std::cerr) : os(s){}
    template <typename T> void operator() (T* p) const{
        os << "deleting unique_ptr" << std::endl;
        delete p;
    }
private:
    std::ostream &os;
};

int main(){
    DebugDelete dd;
    int *pi = new int(2);
    dd(pi);
    double *pd = new double(2.3);
    dd.operator ()(pd);

    return 0;
}

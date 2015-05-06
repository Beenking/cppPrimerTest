//typedef int length;
class A{
public:
    typedef float length;
    length l = 3.3;

private:

};

int main(){
    A a;

    auto sss = a.l;

    return 0;
}

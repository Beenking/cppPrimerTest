#include <malloc.h>

#define SIZE_20M 20*1024*1024
void func_a()
{
    char *tmp = (char*)malloc(SIZE_20M);
}
void func_b()
{
    char temp[SIZE_20M];
    //...do something using temp
}

int main(){
    func_a();
    int s = 1;

    func_b();
    return 0;

}

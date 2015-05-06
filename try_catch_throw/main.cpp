#include<iostream>     //包含头文件
#include<stdlib.h>
using namespace std;

double fuc(double x, double y) //定义函数
{
    if(y==0)
    {
        throw y;     //除数为0，抛出异常
    }
    return x/y;     //否则返回两个数的商
}

int main()
{
    double res;

        res=fuc(2,3);
        cout<<"The result of x/y is : "<<res<<endl;
        res=fuc(4,0); //出现异常，函数内部会抛出异常
return 0;

}

#include <stdio.h>

struct data
{
 int a;
 unsigned short b;
};

int main(void)
{
 data mData;
 mData.b = 0x0102;
 char *pData = (char *)&mData;
 printf("%d %d", sizeof(pData), *(pData + 4));
 return 0;
}

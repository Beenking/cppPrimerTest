#include <stdio.h>

class Test2

{

    public :

        Test2()

        {

            printf("Test2 构造函数./n");

        }

        virtual

        ~Test2( )

        {

            printf("Test2 析构函数./n");

        }

        void test()

        {

            printf("Test2 test 函数/n");

        }

};

Test2 t2;

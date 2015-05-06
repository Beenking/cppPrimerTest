#include <stdio.h>

class Test1

{

    public :

        Test1()

        {

            printf("Test1 构造函数./n");

          t2.test();

        }

        virtual

        ~Test1( )

        {

            printf("Test1 析构函数./n");

        }

        void test()

        {

            printf("Test1 test 函数/n");

        }

};

Test1 t1;

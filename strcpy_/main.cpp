#include <stdio.h>
#include <string.h>
#include <string.h>
/*
int main(int argc, char *argv[])

{
    argv[1] = "LinuxGeek";

    int flag = 0;

    char passwd[10];


    memset(passwd,0,sizeof(passwd));


    strcpy(passwd, argv[1]);


    if(0 == strcmp("LinuxGeek", passwd))

    {

        flag = 1;

    }


    if(flag)

    {

        printf("\n Password cracked \n");

    }

    else

    {

        printf("\n Incorrect passwd \n");


    }

    return 0;

}*/




#include<stdio.h>
#include <malloc.h>


int main(void)

{

    char *ptr = (char*)malloc(10);


    if(NULL == *ptr)

    {

        printf("\n Malloc failed \n");

        return -1;

    }

    else

    {

        // Do some processing


        free(ptr);

    }


    return 0;

}



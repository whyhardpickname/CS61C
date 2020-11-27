#include<stdio.h>

int main()
{
    typedef struct struc1 
    {
        int a;
        char b;
        short c;
        char *d;
        char e;
    }s1;

    typedef struct struc2
    {
        int a;
        char b;
        char e;
        short c;
        char *d;
    }s2;

    printf("%lu\n", sizeof(s1));
    printf("%lu\n", sizeof(s2));
    return 0;
}
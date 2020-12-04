#include<stdio.h>

int myStrlen(char *s)
{
    int count = 0;
    while(*s++)
    {
        count++;
    }
    return count;
}

int main()
{
    char *s = "hello,world";
    printf("strlen = %d\n", myStrlen(s));
    return 0;
}
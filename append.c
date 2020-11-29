#include<stdio.h>
#include<malloc.h>
#include<string.h>

char *append(const char *s1, const char *s2)
{
    const int MAXCHAR = 10;
    char *result = (char *) malloc(MAXCHAR * sizeof(char));
    int i = 0;
    int j = 0;

    for (;i < MAXCHAR - 1 && j < strlen(s1); i++, j++)
    {
        result[i] = s1[j];
    }

    for (j = 0;i < MAXCHAR - 1 && j < strlen(s2); i++, j++)
    {
        result[i] = s2[j];
    }
    result[i] = '\0';
    return result;
    
}
int main()
{
    char *s1 = "hello,";
    char *s2 = "c";
    char *s = append(s1, s2);
    
    printf("%s\n%lu\n", s, strlen(s));
    int i = 0;
    return 0;
}
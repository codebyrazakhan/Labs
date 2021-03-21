#include<stdio.h>
#include<stdlib.h>
int main()
{
    int s=0;
    char m[20],*p;
    printf("enter string:\n");
    gets(m);
    p=m;
    while (*p!='\0')
    {
        s++;
        p++;
        }
    
        printf("Length of entered string is= %d \n",s);
        return 0;
}
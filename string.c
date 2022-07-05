
#include <stdio.h>
#include<string.h>
int main()
{
    char a[]="udhayakesavaraj";
    for(int i=0;a[i]!='\0';i++)
    {
        a[i]-=32;
    }
    printf("%s",a);
}


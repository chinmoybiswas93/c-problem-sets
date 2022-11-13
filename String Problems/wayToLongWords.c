#include<stdio.h>
#include<string.h>

int main ()
{
    int i=0,n;
    scanf("%d",&n);
    while(i<n)
    {
        char name[100];
        gets(name);
        int length = strlen(name)-1;
        if (length > 10)
        {
            printf("%c%d%c\n",name[0],length-2,name[length-1]);
        }
        else
        {
            printf("Printing from else - ");
            puts(name);
        }
        i++;
    }


    return 0;
}

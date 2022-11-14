#include<stdio.h>
#include<string.h>

int main ()
{
    int i=0,n;
    char c;
    scanf("%d%c",&n,&c);
    while(i<n)
    {
        char name[102];
        fgets(name, sizeof(name), stdin);
        int length = strlen(name)-1;
        if (length > 10)
        {
            printf("%c%d%c\n",name[0],length-2,name[length-1]);
        }
        else
        {
            puts(name);
        }
        i++;
    }


    return 0;
}

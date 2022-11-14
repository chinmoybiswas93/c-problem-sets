#include<stdio.h>
#include<string.h>

int main ()
{
    int i,m,z;
    scanf("%d%c",&m,&z);

    char str[100][1024];

    for(i=0; i<m; i++)
    {
        scanf("%s", str[i]);
    }

    for(i=0; i<m; i++)
    {
        printf("%s ", str[i]);
    }

    return 0;
}

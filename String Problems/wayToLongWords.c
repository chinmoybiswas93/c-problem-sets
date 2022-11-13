#include<stdio.h>
#include<string.h>

int main ()
{
    int N;
    scanf("%d",&N);
    for(int i=0; i < N ; i++)
    {
        char name[100];
        fgets(name, sizeof(name), stdin);
        int length = strlen(name)-1;
        printf("%d",length);

    }

    return 0;
}

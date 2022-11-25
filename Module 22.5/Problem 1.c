#include<stdio.h>
#include<string.h>

int is_binary (char str[], int l)
{
    for(int i=0; i<l; i++)
    {
        if(str[i] != '1' && str[i] != '0')
            return 0;
    }
    return 1;
}
int main ()
{
    int length;
    char str[100];
    fgets(str, sizeof(str), stdin);
    length = strlen(str)-1;

    if(is_binary(str,length)== 1)
        printf("Binary\n");
    else
        printf("Not Binary\n");

    return 0;
}

#include<stdio.h>
#include<string.h>

int main ()
{
    int i, flag = 1;
    char str[1024];
    fgets(str, sizeof(str),stdin);
    int l = strlen(str)-1;

    for(int i=0; i<l; i++)
    {
        if(!(str[i] == '1' || str[i] == '0')){
            flag = 0;
        }
    }

    if(flag == 0)
        printf("No");
    else
        printf("Yes");

    return 0;
}


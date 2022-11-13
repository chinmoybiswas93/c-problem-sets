#include<stdio.h>
#include<string.h>

int main()
{
    int i, j;
    char str[102];

    fgets(str, sizeof(str),stdin);
    int l = strlen(str)-1;

    for(i=0; i < l ; i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
        if(!(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='y')){
            printf(".%c",str[i]);
        }
    }

    return 0;
}

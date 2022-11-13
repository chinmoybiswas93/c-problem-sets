#include<stdio.h>
#include<string.h>

int main()
{
    int i, j, start, end, flag = 1;
    char str[1000];

    fgets(str, sizeof(str),stdin);
    int l = strlen(str)-1;

    start = 0;
    end = l-1;

    for(i = 0; i < l/2 ; i++)
    {

        if(str[start] != str[end])
            flag = 0;

        start++;a
        end--;
    }

    if(flag == 1)
        printf("Yes");
    else
        printf("No");


    return 0;
}

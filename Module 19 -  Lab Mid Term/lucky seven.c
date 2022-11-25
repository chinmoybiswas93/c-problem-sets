#include<stdio.h>
#include<string.h>
int main()
{
    int T;
    char ch;
    char str[102];
    scanf("%d%c", &T, &ch);
    for(int j=0; j<T; j++)
    {

        fgets(str,sizeof(str), stdin);
        int len=strlen(str)-1;
        if(len > 20){
            len = 20;
        }

        int flag=1;
        for(int i=0; i<len/2; i++)
            if(str[i]!=str[len-i-1])
                flag=0;

        if(flag==0)
        {
            printf("Case #1: Not Palindrome\n");
        }
        else
        {
            if(len<=7)
            {
                printf("Case #3: %s",str);
            }
            else
            {
                printf("Case #2: %c%d%c\n", str[0],len-2,str[len-1]);
            }

        }
    }
    return 0;
}

#include<stdio.h>
#include<string.h>

int main(void)
{

    int cost=0, count=0, flag=1, i, l;
    char str[102];

    fgets(str, sizeof(str), stdin);
    l = strlen(str)-1;

    for(i = 0 ; i < l ; i++)
    {
        cost += str[i] - 'a' + 1;
    }

    while(cost > 1)
    {
        if(cost % 2 == 0)
        {
            count++;
            cost = cost / 2;
        }
        else
        {
            flag = 0;
            count=0;
            break;
        }
    }

    if(flag == 0)
    {
        printf("No\n");
    }
    else
    {
        printf("Yes\n");
        printf("cost: %d^%d\n",2,count);
    }

    return 0;
}

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int sum_all(int goals)
{
    int sum=0,m;
    int n = goals;
    while(n>0)
    {
        m=n%10;
        sum=sum+m;
        n=n/10;
    }
    return sum;
}


int main()
{


    int a,b;
    int arg,bra, flag=0;

    scanf("%d %d", &a, &b);


    if(a>b)
    {
        printf("Argentina");
    }
    else if (b>a)
    {
        printf("Brazil");
    }
    else
    {
        while(flag==0)
        {
            scanf("%d %d", &arg, &bra);
            int ar_sum = sum_all(arg);
            int br_sum = sum_all(bra);
            if(ar_sum > br_sum)
            {
                printf("Argentina");
                flag = 1;
            }
            else if (ar_sum < br_sum)
            {
                printf("Brazil");
                flag = 1;
            }

        }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}

#include<stdio.h>

int is_prime (int n)
{
    if( n == 2)
    {
        return 1;
    }
    for(int i = 2 ; i <= n/2 ; i++)
    {
        if(n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int rows,counter=2,i,j;
    scanf("%d",&rows);

    for ( i = 1; i <= rows; i++)
    {
        for(j=1; j <=i ; j++)
        {
            while(!is_prime(counter))
            {
                counter++;
            }
            printf("%d ", counter);
            counter++;
        }
        printf("\n");
    }

    return 0;
}

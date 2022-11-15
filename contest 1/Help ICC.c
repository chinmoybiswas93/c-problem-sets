#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int T,j;
    scanf("%d",&T);
    for(j = 0; j < T ; j++)
    {
        int i,sum = 0,arr[6];
        for(i = 0; i < 6 ; i++)
        {
            scanf("%d",&arr[i]);
            sum += arr[i];
        }

        if(sum > 0)
        {
            printf("No\n");
        }
        else
        {
            printf("Yes\n");
        }
    }


    return 0;
}

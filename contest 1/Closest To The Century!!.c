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
        int i,N,arr[20];
        scanf("%d",&N);
        int max = 0;
        for(i = 0; i < N ; i++)
        {
            scanf("%d",&arr[i]);
            if(arr[i]> max)
            {
                max = arr[i];
            }
        }
        printf("%d\n",max);
    }

    return 0;
}


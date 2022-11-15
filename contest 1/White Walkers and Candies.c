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
        int N, C;
        scanf("%d %d", &N, &C);
        int i,arr[N],total=0;
        for(i = 0 ; i < N ; i++)
        {
            scanf("%d",&arr[i]);
            total+= 2*arr[i];
        }
        printf("\n");
        if(total < C)
        {
            printf("Yes");
        }
        else
        {
            printf("No");
        }
    }
    return 0;
}

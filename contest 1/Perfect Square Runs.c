#include <math.h>
#include <stdio.h>

int main()
{

    int T,j;
    scanf("%d",&T);
    for(j = 0; j < T ; j++)
    {
        int i, n, count = 0, testroot=0;
        scanf("%d",&n);
        double arr[n], squareRoot;
        for(i=0; i<n; i++)
        {
            scanf("%lf", &arr[i]);
            squareRoot = sqrt(arr[i]);
            testroot = squareRoot;
            if(squareRoot == testroot)
            {
                count++;
            }
        }
        if(count == 0) {
            printf("%d\n",count-1);
        }
        else {
            printf("%d\n",count);
        }


    }



    return 0;
}

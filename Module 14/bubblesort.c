#include<stdio.h>

int main ()
{
    int n, i, j, k, arr[100], temp;

    scanf("%d",&n);
    for(i = 0 ; i < n ; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(j=0; j<n; j++)
    {
        printf("******Step %d********\n",j+1);
        for(i=0; i<n; i++)
        {
            printf("For position = %d %d\n",i+1, i+2);
            if(arr[i] > arr[i+1])
            {
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
            for(k = 0; k < n ; k++)
            {
                printf("%d ", arr[k]);
            }
            printf("\n");

        }
    }
    return 0;
}

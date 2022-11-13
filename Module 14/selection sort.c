#include<stdio.h>

int main ()
{
    int n, i, j, arr[100], sorted_arr[100], min, min_index;

    scanf("%d",&n);
    for(i = 0 ; i < n ; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i=0; i<n; i++)
    {
        min = arr[0];
        min_index = 0;

        for(j=0; j<n; j++)
        {
            if(arr[j] < min)
            {
                min = arr[j];
                min_index = j;
            }
        }

        sorted_arr[i] = min;
        arr[min_index] = 999;


    }
    for(j = 0; j < n ; j++)
    {
        printf("%d ", sorted_arr[j]);
    }
    printf("\n");


    return 0;
}

#include <stdio.h>

void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(int arr[], int n)
{
    int i, j, min_idx;

    for (i = 0; i < n - 1; i++)
    {

        min_idx = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;
        swap(&arr[min_idx], &arr[i]);
    }
}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Driver code
int main()
{
    int n, arr[100], num;

    scanf("%d", &n);
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &num);
    selectionSort(arr, n);
    printArray(arr,n);

    printf("%dth largest element = %d\n",num, arr[n-num]);
    printf("%dth smallest element = %d",num, arr[num-1]);
    return 0;
}

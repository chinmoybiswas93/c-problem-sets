#include<stdio.h>

int count_strict (int n, int arr[])
{
    int num, count = 0 ;
    scanf("%d",&num);
    for( int i = 0 ; i < n ; i++)
    {
        if(arr[i] > num || arr[i] < num)
            count++;
    }
    return count;
}

int main ()
{
    int n, arr[100], num;

    scanf("%d", &n);
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d", &arr[i]);
    }
    int result = count_strict (n, arr);
    printf("%d", result);
    return 0;

}

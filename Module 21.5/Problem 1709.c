#include<stdio.h>
int got_all_key(int arr[4], int key);
int main ()
{
    int test, t;
    scanf("%d",&test);

    for (t = 0 ; t < test ; t++)
    {
        int key, temp, arr[4],i;
        scanf("%d",&key);

        for(i = 1; i < 4; i++)
        {
            scanf("%d",&arr[i]);
        }

        if(got_all_key(arr,key)==1)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}

int got_all_key(int arr[4], int key)
{
    int temp;
    while(key > 0 ) {
        temp = arr[key];
        arr[key]=0;
        key = temp;
        if(key ==0) break;
    }

    int sum = 0;
    for(int i = 1; i< 4; i++) {
        sum += arr[i];
    }

    if(sum==0)
        return 1;
    else
        return 0;
}













///problemset/problem/1709/A

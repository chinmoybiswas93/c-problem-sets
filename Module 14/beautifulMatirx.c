#include<stdio.h>

int main ()
{
    int i, j, k, x, y, arr[5][5], ans=0;

    for(i = 0 ; i < 5 ; i++)
    {
        for (j =0 ; j < 5 ; j++)
        {
            scanf("%d", &arr[i][j]);
            if(arr[i][j]==1)
            {
                x = i ;
                y = j;
            }
        }
    }

    if (x > 2)
    {
        ans += (x-2);
    }
    else
    {
        ans += (2-x);
    }

    if (y > 2)
    {
        ans += (y-2);
    }
    else
    {
        ans += (2-y);
    }

    printf("%d\n", ans);

    return 0;
}

//https://codeforces.com/problemset/problem/263/A

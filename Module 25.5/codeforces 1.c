#include<stdio.h>

int is_polycarp(int num)
{
    if(num % 3  == 0 || num % 10 == 3)
        return 0;
    else
        return 1;
}

int polycarp (int num)
{
    int count, i;
    count = 0;
    for (i = 1; i > 0 ; i++)
    {
        if(is_polycarp(i)==1)
            count++;
        if(count == num)
            return i;
    }
}

void solve ()
{
    int num, result;
    scanf("%d",&num);
    result = polycarp(num);
    printf("%d\n", result);
}

int main ()
{
    int test;
    scanf("%d",&test);
    for(int i = 0; i < test ; i++){
        solve();
    }
}

/*
https://codeforces.com/contest/1560/problem/A
*/

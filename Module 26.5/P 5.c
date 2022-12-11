#include <stdio.h>

// do sum of numbers
int do_sum(int array[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; ++i)
    {
        if(array[i] % 10 == 0)
            sum += array[i];
    }
    return sum;
}

//Main Function
int main()
{
    int size, data[100];
    scanf("%d",&size);

    //Array input
    for (int i = 0; i < size; ++i)
    {
        scanf("%d", &data[i]);
    }

    //calculating sum
    int sum = do_sum(data, size);
    printf("%d\n",sum);
}


/*
You have given positive integer N, the size of an array as input. Take an array of size N as input. You have to find the
sum of those element in array which last digit is zero. Implement this by using function.
Note - It is guaranteed that each element of an array is at least 2 digit number.
Sample Input:               Sample Output:
5                           200
110 24 50 35 40
*/

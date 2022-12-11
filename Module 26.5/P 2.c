#include <stdio.h>

void swap (int *p, int *q)
{
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}
// perform the bubble sort
void bubbleSort(int array[], int size)
{

    // loop to access each array element
    for (int step = 0; step < size - 1; ++step)
    {

        // loop to compare array elements
        for (int i = 0; i < size - step - 1; ++i)
        {

            // compare two adjacent elements
            // change > to < to sort in descending order
            if (array[i] > array[i + 1])
            {
                swap(&array[i], &array[i+1]);
            }
        }
    }
}

// print array
void printArray(int array[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
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

    //sorting with bubble sort
    bubbleSort(data, size);

    printArray(data, size);
}


/*
In Bubble sort we compares two adjacent elements and swaps them until they are in the intended order.
You have given positive integer N, the size of an array as input. Take an array of size N as input and sort this array
by using Bubble sort. You must make a function for swapping numbers by using pass by reference.
Sample Input:               Sample Output:
5                           2 3 4 6 8
4 3 8 2 6
*/

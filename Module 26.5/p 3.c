#include<stdio.h>
void printArray(int array[], int size)
{
    for (int i = 0; i < size; ++i)
        printf("%d ", *(array+i));

    printf("\n");
}

//Main Function
int main()
{
    int size, array[100];
    scanf("%d",&size);

    //Array input
    for (int i = 0; i < size; ++i)
        scanf("%d", array+i);

    printArray(array, size);
}

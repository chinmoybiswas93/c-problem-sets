#include<stdio.h>

int add_three_nums(int a, int b, int c)
{
	return a+b+c;
}

int add_two(int a, int b){
    return add_three_nums(a,b,0);
}

int main()
{
    int num1,num2,result;
    scanf("%d %d", &num1, &num2);

    result = add_two(num1, num2);
    printf("%d",result);



    return 0;
}

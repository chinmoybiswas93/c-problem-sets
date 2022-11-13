#include<stdio.h>

int main() {

int a=5, b=13;
//Write code here
int temp;

temp  = a;
a = b ;
b = temp;
//End of code
printf("%d and %d" , a, b);
return 0;
}


//1. Update the following code such that it swaps the contents of two two variables.
//You can only write code inside the two comments. Do not modify anything else.
//The printf function is supposed to print “13 and 5”. So basically the value must be swapped but you can not assign 13 directly to a and 5 directly to b.
//You can not use other numbers as well. But you can declare an extra variable if you need.

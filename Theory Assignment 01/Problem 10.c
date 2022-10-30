#include <stdio.h>

int main() {

  int n, i, flag = 0;
  scanf("%d", &n);

  if (n == 0 || n == 1)
    flag = 1;

  for (i = 2; i <= n / 2; ++i) {

    if (n % i == 0) {
      flag = 1;
      break;
    }
  }

  if (flag == 0)
    printf("Prime");
  else
    printf("Composit");

  return 0;
}



/*
Primality Testing is one of the most common and the most important problem in the world of Number Theory and also in basic programming.
In this problem you will be given an integer as input and you need to find out whether the number is prime or not.
Just for your information, prime numbers are the numbers that have only two factors which are 1 and themselves.
For example, 37 is a prime number because it has no factors other than 1 and 37.
On the other hand 39 is not a prime number called composite number since 39 has factors other than 1 and 39 such as 3 and 13.

Sample Input 1:
12

Sample Output 1:
Composite

Sample Input 2:
1009

Sample Output 2:
Prime

*/

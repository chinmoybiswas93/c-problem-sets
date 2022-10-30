#include <stdio.h>

int main() {

    int n1, n2, max;
    scanf("%d %d", &n1, &n2);


    if(n1 > n2 ) {
        max = n1;
    }
    else {
        max = n2;
    }

    while (1) {
        if ((max % n1 == 0) && (max % n2 == 0)) {
            printf("The LCM of %d and %d is %d.", n1, n2, max);
            break;
        }
        ++max;
    }
    return 0;
}

/*
Take two integers as input and print their LCM as the output.
We know, LCM of two numbers is the least common multiple of two numbers.
You can use the logic from Question no. 6 to solve this problem.
Sample Input 1:
12 18
Sample Output 1:
The LCM of 12 and 18 is 36.
*/

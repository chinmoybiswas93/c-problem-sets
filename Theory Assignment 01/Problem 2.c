#include<stdio.h>

int main() {

    int a, b, c, d;
    scanf("%d%d%d%d",&a,&b,&c,&d);

    // for greatest
    if( a > b){
            if(c > d) {
                    if(a > c) {
                        printf("Largest: %d\n", a);
                    }else {
                        printf("Largest: %d\n", c);
                    }
            }else {
                if(a > d){
                    printf("Largest: %d\n", a);
                }else {
                    printf("Largest: %d", d);
                }
            }

    }else {
        if(c > d) {
            if(b > c) {
                        printf("Largest = %d\n", b);
                    }else {
                        printf("Largest = %d\n", c);
                    }
        }else {
            if(b > d) {
                        printf("Largest = %d\n", b);
                    }else {
                        printf("Largest = %d\n", d);
                    }
        }
    }

    //for smallest
    if( a < b){
            if(c < d) {
                    if(a < c) {
                        printf("Smallest = %d\n", a);
                    }else {
                        printf("Smallest: %d\n", c);
                    }
            }else {
                if(a < d){
                    printf("Smallest: %d\n", a);
                }else {
                    printf("Smallest: %d\n", d);
                }
            }

    }else {
        if(c < d) {
            if(b < c) {
                        printf("Smallest: %d\n", b);
                    }else {
                        printf("Smallest: %d\n", c);
                    }
        }else {
            if(b < d) {
                        printf("Smallest: %d\n", b);
                    }else {
                        printf("Smallest: %d\n", d);
                    }
        }
    }
return 0;
}

//You need to take 4 distinct integer as input. Print the largest and smallest among them.
//Distinct means all of them are separate integers. None of them is equal to any other of them.


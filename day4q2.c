//Program to find sum of first n natural numbers

#include<stdio.h>

int main() {

    int n, sum;

    printf("How many natural numbers do you need the sum of :  ");
    scanf("%d", &n);


    sum = (n*(n + 1))/2;

    printf("The sum of the first %d natural numbers is: %d\n", n, sum);

    return 0;
}

#include <stdio.h>//program to check if triangle is equi , sca or iso  

int main () {
    int a, b, c;
    printf("Enter the sides of the triangle in cm : ");
    scanf("%d %d %d", &a, &b, &c);

    if (a==b && b==c) {
        printf("This is an equilateral triangle");
    } else if (a==b || a==c || b==c) {
        printf("This is an isosceles triangle");
    } else {
        printf("This is a scalene triangle");
    }
    return 0;
}


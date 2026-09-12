//Program to calculate roots of a quadratic equation and identify the roots 

#include<stdio.h> 
#include<math.h>

int main () {
    double a,b,c, discriminant, root1, root2, real, imag;
    printf("The  quadratic equation will be in the form of ax^2 + bx + c = 0 ");
    printf("Enter the coefficient of x^2: ");
    scanf("%lf", &a);
    printf("Enter the coefficient of x: ");
    scanf("%lf", &b);
    printf("Enter the constant term: ");
    scanf("%lf", &c);
    printf("%.1lfx^2 + %.1lfx + %.1lf = 0\n", a, b, c);

    discriminant = b*b - 4*a*c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and distinct: %.2lf and %.2lf", root1, root2);
    }
    // Real and equal roots
    else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("Roots are real and equal: %.2lf and %.2lf", root1, root2);
    }
    // Complex roots
    else {
        real = -b / (2 * a);
        imag = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex: %.2lf + %.2lfi and %.2lf - %.2lfi", 
                real, imag, real, imag);
    }

}

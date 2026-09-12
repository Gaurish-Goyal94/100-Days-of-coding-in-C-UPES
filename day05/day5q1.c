// Program to calculate simple and compound interest with given principal amount , rate and time
#include<stdio.h>
#include<math.h>

int main() {

    double principal, rate, time, simple_interest, compound_interest, amount;

    printf("Enter principal amount: ");
    scanf("%lf", &principal);

    printf("Enter annual rate of interest : ");
    scanf("%lf", &rate);

    printf("Enter time period : ");
    scanf("%lf", &time);


    simple_interest = (principal * rate * time) / 100;
    amount = principal * pow((1 + rate / 100), time);
    compound_interest = amount - principal;

    printf("Simple Interest = %.2lf", simple_interest);
    printf("Compound Interest = %.2lf", compound_interest);

    return 0;
}

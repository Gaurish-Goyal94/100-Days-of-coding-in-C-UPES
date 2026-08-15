#include<stdio.h> //Program for calculating sum, difference, product, quotient of two numbers given by user

int main () {

	int a;
	int b;

	printf("Enter two number to get their sum, difference, product and quotient : ");
	scanf("%d %d",&a, &b);

	int sum = a+b;
	int difference = a-b;
	int product = a*b;
	int quotient = a/b;

	printf("The sum, difference, product, quotient are : %d %d %d %d", sum, difference, product, quotient);
	return 0;
}

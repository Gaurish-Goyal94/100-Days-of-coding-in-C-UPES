#include<stdio.h> //Write a progeam to take input from user of two numbers and give their sum

int main () {

	int a;
	int b;

	printf("Enter two numbers to calulate their sum : ");
	scanf("%d %d",&a, &b);
	int sum = a+b;
	printf("The sum of these numbers is : %d", sum);
	return 0;
}

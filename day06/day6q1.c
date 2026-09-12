// program to check if the number given by user is odd or even using if else statements

#include<stdio.h>

int main () {

	int a;
	printf("Enter the number : ");
	scanf("%d", &a);

	if(a==0) {
	printf("0 is neither odd nor even");
	} else if(a%2==0) {
	printf("This is an even number");
	} else {
	printf("The given number is odd");
	}
	return 0;
}

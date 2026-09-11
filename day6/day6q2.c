//Program to check if a number is positive, negative or 0

#include<stdio.h>

int main () {

	int a;
	printf("Enter a number : ");
	scanf("%d", &a);

	if(a==0) {
	printf("0 is neither positive nor negative");
	} else if(a<0) {
	printf("This number is negative");
	} else
	printf("This number is positive");
	}
	return 0;
}

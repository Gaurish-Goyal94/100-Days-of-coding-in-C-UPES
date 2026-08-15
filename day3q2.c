//Program for swapping the digits of a 2 digit number

#include<stdio.h>

int main () {

	int a;
	printf("Enter the number to swap its digits : ");
	scanf("%d", &a);
	int onesdigit = a%10;
	int tensdigit = a/10;
	int finalnumber = (onesdigit*10)+tensdigit;
	printf("The number after swapping digits is %d",finalnumber);
	return 0;
}

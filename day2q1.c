#include<stdio.h> //Program for area and perimetre of rectangle by taking input from user

int main () {

	int length;
	int breadth;
	printf("Enter the length of rectangle : ");
	scanf("%d", &length);
	printf("Enter the breadth of rectangle : ");
	scanf("%d", &breadth);

	int perimetre = 2*(length+breadth);
	int area = length*breadth;

	printf("The perimetre is %d, and the area is %d", perimetre, area);
	return 0;
}

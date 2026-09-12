//Program for area and circumference of a circle

#include<stdio.h>

int main () {

	int radius;
	printf("Enter radius of the circle : ");
	scanf("%d", &radius);

	float area = 3.14*radius*radius;
	float circumference = 2*3.14*radius;

	printf("The area is %.2f, and circumference is %.2f", area, circumference);
	return 0;
}

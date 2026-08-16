//Program to convert seconds to hours:minutes:seconds

#include<stdio.h>

int main () {

	int time;
	int hours;
	int minutes;
	int left_minutes;
	int left_seconds;
	printf("Enter the time in seconds : ");
	scanf("%d", &time);

	hours = time/3600;
	minutes = time/60;
	left_minutes = minutes%60;
	left_seconds = time%60;

	printf("The time is %d hours %d minutes %d seconds",hours, left_minutes, left_seconds);
	return 0;
}

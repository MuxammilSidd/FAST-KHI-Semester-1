/* QUESTION#1
A car traveled for some hours. Take the number of Hours travelled as input on runtime,
and then take input for the Distance Travelled during this time, Calculate Average Speed
and display it on the screen. */

#include<stdio.h>
void main()
{
	float hrs, dist, speed;
	printf("Enter hours travelled: ");
	scanf("%f", &hrs);
	printf("Enter distance(km) travelled: ");
	scanf("%f", &dist);
	
	speed= dist/hrs;
	
	printf("\nThe average speed is = %f kmph", speed);
	return 0;
}


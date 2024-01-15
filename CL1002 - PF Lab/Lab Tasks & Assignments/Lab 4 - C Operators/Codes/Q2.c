// C program to find distance between two points
#include<stdio.h>
#include<math.h>
int main()
{
	float x1, y1, x2, y2, dist;
	printf("Enter x-component of first point: ");
	scanf("%f", &x1);
	printf("Enter y-component of first point: ");
	scanf("%f", &y1);
	printf("Enter x-component of second point: ");
	scanf("%f", &x2);
	printf("Enter y-component of second point: ");
	scanf("%f", &y2);
	
	dist = sqrt(pow((x1-x2),2)+pow((y1-y2),2));
	printf("Distance between points is %f units", dist);
	return 0;
}


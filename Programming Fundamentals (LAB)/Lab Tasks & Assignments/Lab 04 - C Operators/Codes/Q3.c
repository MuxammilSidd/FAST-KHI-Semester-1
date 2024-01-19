// C program to find dot product
#include<stdio.h>
#include<math.h>
int main()
{
	int a1 = 5, a2 = 2, a3 = -3;
	int b1 = -4, b2 = 9, b3 = 2;
	float a_mag, b_mag, dot_prod;
	float  x = 53*(M_PI/180);		// Convert degree into radian
	
	a_mag = sqrt(pow(a1,2) + pow(a2,2) + pow(a3,2));
	b_mag = sqrt(pow(b1,2) + pow(b2,2) + pow(b3,2));
	
	dot_prod = a_mag * b_mag * cos(x);
	printf("Dot Product of given vectors A & B is = %.3f ", dot_prod);
}


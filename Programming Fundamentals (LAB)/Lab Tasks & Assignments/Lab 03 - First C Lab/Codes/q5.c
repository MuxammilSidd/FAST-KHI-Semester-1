/* QUESTION#5
Calculate the volume of a Given cone, using FLOAT data type for all values, and output the
final answer up to 3 decimal places exactly. */

#include<stdio.h>
#include<math.h>
void main()
{
	float radius = 8.0, height = 18.0;
	float volume = (M_PI*radius*radius*height)/3;		//M_PI gives value 3.14156...
	
	printf("Volume of cone is: %.3f cm^3", volume);
	return 0;
}


/* QUESTION#6
Find both roots of the quadratic equation using the formula, after taking a, b, c as inputs. */

#include<stdio.h>
void main()
{
	int a,b,c,x;
	float discr, first_root, second_root;
	printf("Enter 'a', 'b' and 'c': \n");
	scanf("%d%d%d",&a,&b,&c);
	
	discr = (b*b)-(4*a*c);
	if (discr > 0)
	{
		first_root = (-b+discr)/(2*a);
		second_root = (-b-discr)/(2*a);
		printf("\n Roots are: %.2f and %.2f", first_root, second_root);
	}
	else if(discr == 0)
	{
		first_root = (-b)/(2*a);
		printf("\n Only one root: %.2f", first_root);
	}
	else
	{
		printf("Roots are complex.");
	}
	
	return 0;
}

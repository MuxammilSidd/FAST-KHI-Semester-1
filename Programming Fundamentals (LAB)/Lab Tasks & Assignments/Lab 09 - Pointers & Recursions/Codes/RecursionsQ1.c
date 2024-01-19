//Qno.1 (Recursions)
#include<stdio.h>
int fct(int num);
int main()
{
	int m;
	printf("Enter a number: ");
	scanf("%d",&m);
	printf("\tFactorial of %d is %d",m,fct(m));
	return 0;
}
int fct(int num)
{
	if(num==0)
	return 1;
	else
	return (num*(fct(num-1)));
}

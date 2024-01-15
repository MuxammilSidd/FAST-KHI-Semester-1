/* QUESTION#4
A customer asks the IT firm to develop a program in C language, which can take tax rate
and salary from the user on runtime and then calculate the tax that user must pay and the
salary he/she will have after paying the tax. Display the net income after tax deduction. */

#include<stdio.h>
void main()
{
	float tax_rate, salary;
	printf("Enter Tax Rate (in %%): ");			//Input Taxrate as %
	scanf("%f", &tax_rate);
	printf("Enter salary: ");
	scanf("%f", &salary);
	
	float tax = (tax_rate/100)*salary;			//Calculates tax on a user salary
	float net_inc = salary - tax;				//Calculates Net Income after tax deduction
	printf("\nUser has to pay %f PKR Tax.", tax);
	printf("\nNet income after tax deduction: %f PKR",net_inc);
	return 0;
}


// Qno.3 Write a C program to input a character from the user and check 
#include<stdio.h>
int main()
{
	char y;
	printf("Enter a character: ");
	scanf("%c", &y);
	
	if(y>=65 && y<=90)
	{
		printf("\nGiven character is a capital alphabet.");
	}
	else if(y>=97 && y<=122)
	{
		printf("\nGiven character is a small alphabet.");		
	}
	else if(y>=48 && y<=57)
	{
		printf("\nGiven character is a digit.");	
	}
	else
	{
		printf("\nGiven character is a special character.");
	}
	return 0;
}


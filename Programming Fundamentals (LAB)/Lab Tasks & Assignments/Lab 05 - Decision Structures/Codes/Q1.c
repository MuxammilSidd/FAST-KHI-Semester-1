// Qno.1 Write a C program for Y/N using Switch Case
#include<stdio.h>
int main()
{
	char m;
	printf("Are you sure to delete? \n\t[Enter y for YES]\n\t[Enter n for NO] \n\n");
	scanf("%c",&m);
	
	switch(m)
	{
		
		case 'y':
			{
				printf("\nDeleted successfully");
				break;
			}
		case 'Y':
			{
				printf("\nDeleted successfully");
				break;	
			}
		case 'n':
			{
				printf("\nDelete canceled");
				break;
			}
		case 'N':
			{
				printf("\nDelete canceled");
				break;
			}
		default:
			{
				printf("\n\tChoose the right option!");
			}
	}
	return 0;
}

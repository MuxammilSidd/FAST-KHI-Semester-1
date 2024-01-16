// Qno.6 C progam to characterize an earthquake
#include<stdio.h>
int main()
{
	float rd;
	printf("Enter Richter Scale Reading: ");
	scanf("%f", &rd);
	
	printf("\n--------------------------------------------------");
	printf("\n\nRichter Scale Number(n)\t\tCharacterization");
	printf("\n\n--------------------------------------------------");
	
	if(rd<5.0)
	{
		printf("\nN<5.0\t\t\tLittle or no damage");
		printf("\n");
	}
	else if(rd>=5.0 && rd<5.5)
	{
		printf("\n5.0<=N<5.5\t\t\tSome damage");
		printf("\n");		
	}
	else if(rd>=5.5 && rd<6.5)
	{
		printf("\n5.5<=N<6.5\t\t\tSerious damage: Walls may crack or fall");		
		printf("\n");
	}
	else if(rd>=6.5 && rd<7.5)
	{
		printf("\n6.5<=N<7.5\t\t\tDisaster: House & Buildings may collapse");
		printf("\n");
	}
	else
	{
		printf("\nHIGHER\t\t\tCatastrophe: most buildings destroyed");
		printf("\n");
	}
	return 0;
}


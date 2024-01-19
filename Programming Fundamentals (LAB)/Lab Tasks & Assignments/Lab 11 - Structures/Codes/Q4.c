//Qno4 Muzammil
#include<stdio.h>

struct employee{
	char name[15];
	float salary;
	int hrs_perday;
};

int main()
{
	int i,j;
	struct employee e[10];
	printf("Store employees data:\n\n");
	for(i=0;i<10;i++)
	{
		printf("Employee#%d: \n",i+1);
		printf("Enter name: ");
		scanf("%s",&e[i].name);
		printf("Enter salary: ");
		scanf("%f",&e[i].salary);
		printf("Enter work hours: ");
		scanf("%d",&e[i].hrs_perday);
		printf("\n\n");
	}
	printf("New salaries:\n");
	for(i=0;i<10;i++)
	{
		if(e[i].hrs_perday>=8 && e[i].hrs_perday<10)
		{
			e[i].salary+=50.0;
		}
		else if(e[i].hrs_perday>=10 && e[i].hrs_perday<12)
		{
			e[i].salary+=100.0;
		}
		else if(e[i].hrs_perday>=12)
		{
			e[i].salary+=150.0;
		}
		printf("Employee: %s\t\tSalary: %.0f\n",e[i].name,e[i].salary);
	}
	return 0;
}

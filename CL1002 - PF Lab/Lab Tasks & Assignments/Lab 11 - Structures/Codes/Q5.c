//Qno5 Muzammil
#include<stdio.h>

struct employee{
		char name[30];
		int id;
		float salary;
};

struct org{
	
	char org_name[40];
	char org_num[40];
	struct employee emp;

};

int main()
{
	struct org xyz;
	printf("Enter organization name: ");
	gets(xyz.org_name);
	printf("Enter organization#: ");
	scanf("%s",&xyz.org_num);
	printf("Enter employee id#: ");
	scanf("%d",&xyz.emp.id);
	fflush(stdin);
	printf("Enter employee name: ");
	gets(xyz.emp.name);
	printf("Enter employee salary: ");
	scanf("%f",&xyz.emp.salary);
	
	system("cls");
	printf("Sizeof structure organization: %d\n",sizeof(xyz));
	printf("Organization name: %s\n",xyz.org_name);
	printf("Organization no.#: %s\n",xyz.org_num);
	printf("Employee id: %d\n",xyz.emp.id);
	printf("Employee name: %s\n",xyz.emp.name);
	printf("Employee salary: %.0f\n",xyz.emp.salary);
	return 0;
}

//Qno1
#include<stdio.h>

struct st_data{
	int r_num;
	char name[20];
	char dept[10];
	char course[10];
	int yr;
};

#define STUDENTS 3
int main()
{
	struct st_data s[STUDENTS];
	int i;
	for(i=0;i<STUDENTS;i++)
	{
		printf("Details of Student#%d\n",i+1);
		printf("Enter Roll num:");
		scanf("%d",&s[i].r_num);
		printf("Enter name:");
		scanf("%s",&s[i].name);
		printf("Enter department:");
		scanf("%s",&s[i].dept);
		printf("Enter course:");
		scanf("%s",&s[i].course);
		printf("Enter year of admission:");
		scanf("%d",&s[i].yr);
		printf("\n");
		
	}

	printf("\n\nStudents in 2023:\n");
	for(i=0;i<STUDENTS;i++)
	{
		if(s[i].yr==2023)
		{
			printf("%s\n",s[i].name);	
		}
	}

	int find;
	printf("\n\nFind by roll number:");
	scanf("%d",&find);
	printf("\n");
	for(i=0;i<STUDENTS;i++)
	{
		if(s[i].r_num==find)
		{
			printf("Name: %s\n",s[i].name);
			printf("Department: %s\n",s[i].dept);
			printf("Course: %s\n",s[i].course);
			printf("Year of admisison: %d\n",s[i].yr);
			printf("Rollno: %d\n",s[i].r_num);	
		}
	}

	return 0;
}
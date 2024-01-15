//Qno9 Muzammil
#include<stdio.h>

struct s_register{
	char c_id[10];
	char c_name[20];
};

struct student{
	int s_id;
	char fst_nm[15];
	char lst_nm[15];
	long long int cell_no;
	char email[40];
	struct s_register r;
};
int main()
{
	int i;
	struct student s[5];
	for(i=0;i<5;i++)
	{
		printf("Student#%d:\n",i+1);
		printf("Enter id: ");
		scanf("%d",&s[i].s_id);
		printf("Enter first name: ");
		fflush(stdin);
		gets(s[i].fst_nm);
		printf("Enter last name: ");
		fflush(stdin);
		gets(s[i].lst_nm);
		printf("Enter cell#: ");
		scanf("%lld",&s[i].cell_no);
		printf("Enter email: ");
		fflush(stdin);
		gets(s[i].email);
		printf("Enter course ID: ");
		fflush(stdin);
		gets(s[i].r.c_id);
		printf("Enter course name: ");
		fflush(stdin);
		gets(s[i].r.c_name);
		printf("\n\n");
	}
	printf("Data:\n");
	for(i=0;i<5;i++)
	{
		printf("\n\nStudent#%d\n",i+1);
		printf("ID:\t\t%d\n",s[i].s_id);
		printf("First Name:\t%s\n",s[i].fst_nm);
		printf("Last Name:\t%s\n",s[i].lst_nm);
		printf("Cell#:\t\t%lld\n",s[i].cell_no);
		printf("Email:\t\t%s\n",s[i].email);
		printf("Course ID:\t%s\n",s[i].r.c_id);
		printf("Course Name:\t%s\n",s[i].r.c_name);
	}
	
	return 0;
}

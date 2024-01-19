// Qno.4
#include<stdio.h>
#include<string.h>
int main()
{
	char pass_i[9];
	char pass_s[9]="Secure123";
	char i,j;
	printf("\t\tWelcome to FAST Portal!\n\n");
	printf("Enter password: ");
	gets(pass_i);
	if(strlen(pass_i)>=8)
	{
		int a=strcmp(pass_i,pass_s);
		if(a==0)
		{
			printf("\n\tLogin successful. Welcome!");
		}
		else
		printf("\n\tLogin failed. Incorrect password.");
	}
	else
	printf("\n\tLogin failed. Incorrect password.");
	return 0;
}



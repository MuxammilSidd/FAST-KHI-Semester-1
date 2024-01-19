//Qno1A Muzammil
#include<stdio.h>
int main()
{
	int i,n;
	printf("How many students to enter: ");
	scanf("%d",&n);
	FILE *muz_file= fopen("scores.txt","w");
	char name[20];
	int mk;

	if(muz_file!=NULL)
	{
		for(i=0;i<n;i++)
			{
				fflush(stdin);
				printf("\nStudent#%d: \n",i+1);
				fprintf(muz_file,"Student#%d: \n",i+1);
				printf("Enter name: ");
				fprintf(muz_file,"Name: ");
				gets(name);
				fprintf(muz_file,"%s",name);
				printf("Enter marks: ");
				fprintf(muz_file,"\tMarks: ");
				scanf("%d",&mk);
				fflush(stdin);
				fprintf(muz_file,"%d",mk);
				fprintf(muz_file,"\n\n");
				fflush(stdin);
			}
			fclose(muz_file);
	}

	else
	{
		printf("File could not be opened!");
	}
	
	return  0;
}


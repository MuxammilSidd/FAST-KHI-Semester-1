//Qno1B Muzammil
#include<stdio.h>
#include<string.h>
int main()
{
	char name[20];
	int r_num;
	int mk,pfmk;
	int i;
	FILE *muz_file=fopen("pfmarks.txt","w");
	
	if(muz_file!=NULL)
	{
		printf("Enter name: ");
		fprintf(muz_file,"Name: ");
		gets(name);
		fprintf(muz_file,"%s",name);
		printf("Enter roll#: ");
		fprintf(muz_file,"   Roll#: ");
		scanf("%d",&r_num);
		fprintf(muz_file,"%d",r_num);
		printf("Enter marks: ");
		scanf("%d",&mk);
		fprintf(muz_file,"    Marks: %d",mk);
		
		fclose(muz_file);

		muz_file=fopen("pfmarks.txt","r");
		if(muz_file!=NULL)
		{
			printf("\n\n");
			char x[10];
			while (fscanf(muz_file,"%s",x) != EOF) 
			{	
				printf("%s ",x);
				if (strcmp(x,"Marks:") == 0) 
				{
					fscanf(muz_file,"%d", &pfmk);
					printf("%d",pfmk+5);
					break;
				}
			}
			fclose(muz_file);
		}
		else
		{
			printf("Data not read!!");
		}
	}
	
	else
	{
		printf("File could not be opened!");
	}
	
	return 0;
}



//Qno2 Muzammil
#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter number of students to record data: ");
    scanf("%d",&n);

    FILE *muz_file=fopen("N_studentmarks.txt","a");
    if(muz_file!=NULL)
    {
        char name[20];
	    int mk;
        for(i=0;i<n;i++)
		{
            fflush(stdin);
            printf("\nStudent#%d: \n",i+1);
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
        }
        fclose(muz_file);
    }

    else
	{
		printf("File could not be opened!");
	}
    return 0;
}
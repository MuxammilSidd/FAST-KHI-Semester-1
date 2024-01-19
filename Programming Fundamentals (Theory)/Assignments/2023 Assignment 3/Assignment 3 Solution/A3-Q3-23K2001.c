#include<stdio.h>
#include<conio.h>
#include<string.h>

struct p_data{
    int id;
    char name[20];
};
struct d_data{
    int id;
    int salary;
};
struct c_data{
    int id;
    char name[20];
    int salary;
};

void merge_r(FILE *p_ptr,FILE *d_ptr,FILE *c_ptr, int n)
{
    int i,j,id_temp,temp_sal;
    struct p_data p[n];
	struct d_data d[n];
    char t_name[20];

    for(i=0;i<n;i++)
    {
		fscanf(p_ptr,"%d",&p[i].id);
		fscanf(p_ptr,"%s",p[i].name);
		fscanf(d_ptr,"%d",&d[i].id);
		fscanf(d_ptr,"%d",&d[i].salary);	
	}
    
    for (i = 0; i<n-1; i++) 
	{
        for (j = 0; j < n-i-1; j++) 
		{
            if (p[j].id > p[j + 1].id) 
			{
                id_temp = p[j].id;
                strcpy(t_name,p[j].name);
                p[j].id = p[j + 1].id;
                strcpy(p[j].name,p[j+1].name);
                p[j + 1].id = id_temp;
                strcpy(p[j+1].name,t_name);
            }
        }
    }
    for (i = 0; i<n-1; i++) 
	{
        for (j = 0; j < n-i-1; j++) 
		{
            if (d[j].id > d[j + 1].id) 
			{
                id_temp = d[j].id;
                temp_sal = d[j].salary;

                d[j].id = d[j + 1].id;
                d[j].salary=d[j+1].salary;

                d[j + 1].id = id_temp;
                d[j+1].salary=temp_sal;
            }
        }
    }
    for(i=0;i<n;i++)
    {
    	fprintf(c_ptr,"%d\t\t",p[i].id);
    	fprintf(c_ptr,"%-20s\t",p[i].name);
        fprintf(c_ptr,"%d\t",d[i].salary);      // since we have also sorted d_data structure
    	// for(j=0;j<n;j++)
    	// {
    	// 	if(p[i].id==d[j].id)
    	// 	{
    	// 		fprintf(c_ptr,"%d",d[j].salary);
		// 	}
		// }
		fprintf(c_ptr,"\n");
	}
}

int main()
{
    printf("23K-2001\n");
	printf("Muzammil\n\n");

    int i,r,id,salary;
    char name[20];
    printf("How many records to enter: ");
    scanf("%d",&r);
    FILE *inp_file=fopen("personal.txt","w+"); 
    printf("Enter record data for personal.txt:\nPress Enter\n\n");
    getch();

    for(i=0;i<r;i++)
    {
        printf("Enter id: ");
        scanf("%d",&id);
        fprintf(inp_file,"%d\t\t",id);
        printf("Enter name:");
        fflush(stdin);
        scanf("%s",name);
        fprintf(inp_file,"%-20s\n",name);
    }
    fclose(inp_file);

    inp_file=fopen("dpt.txt","w+"); 
    printf("Enter record data for department.txt:\nPress Enter\n\n");
    getch();

    for(i=0;i<r;i++)
    {
        printf("Enter id: ");
        scanf("%d",&id);
        fprintf(inp_file,"%d\t\t",id);
        printf("Enter salary:");
        scanf("%d",&salary);
        fprintf(inp_file,"%d\n",salary);
    }
    fclose(inp_file);
//---------------------------------------------------------------------------------------------------------------------

    FILE *comb = fopen("combined.txt","w");
    FILE *personal = fopen("personal.txt","r");
    FILE *dept = fopen("dpt.txt","r");

    merge_r(personal,dept,comb,r);
    fclose(comb);
    fclose(personal);
    fclose(dept);
    printf("\nRecords merged, checkout Combined.txt file from folder!!");
    return 0;
}

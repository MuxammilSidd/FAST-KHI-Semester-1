//Qno2
#include<stdio.h>
#include<string.h>
struct engine{
	char snum[4];
	int yr;
	char material[20];
	int qty;
};
int main()
{
	int i;
	struct engine e[6];
	for(i=0;i<6;i++)
	{
	printf("Enter serial number: ");
	scanf("%s",&e[i].snum);
	printf("Enter Year of manufacture: ");
	scanf("%d",&e[i].yr);
	printf("Enter material: ");
	scanf("%s",&e[i].material);
	printf("Enter quantity: ");
	scanf("%d",&e[i].qty);
	}	
	
	printf("\n\n");
	
	for(i=0;i<6;i++)
	{
	if(strcmp(e[i].snum,"BB1\0")>0 && strcmp(e[i].snum,"CC6\0")<0)
	{
	printf("Serial number: ");
	printf("%s",e[i].snum);	
	printf("\nYear of manufacture: ");
	printf("%d",e[i].yr);
	printf("\nEnter material: ");
	printf("%s",e[i].material);
	printf("\nEnter quantity: ");
	printf("%d",e[i].qty);
	}	
	}
	
	return 0;
}



//Qno.3 (Pointers)
#include<stdio.h>
int main()
{
	int n;
	printf("Enter size of array: ");
	scanf("%d",&n);
	char ar1[n];
	char *p1 = ar1;
	int ar2[n];
	int *p2 = ar2;
	long int ar3[n];
	long int *p3 = ar3;
	
	int i;
	
	printf("\nEnter characters for first array: \n");
	for(i=0;i<n;i++)
	scanf(" %c",&ar1[i]);
		
	printf("\nEnter integers for second array: \n");
	for(i=0;i<n;i++)
	scanf("%d",&ar2[i]);

	printf("\nEnter long integers for third array: \n");
	for(i=0;i<n;i++)
	scanf("%ld",&ar3[i]);

		
	printf("\n\t\t-:Addresses and values:-\n\n");
	for(i=0;i<n;i++)
	printf("%c at address:%d\n",*(p1+i),p1+i);
	
	printf("\n");

	for(i=0;i<n;i++)
	printf("%d at address:%d\n",*(p2+i),p2+i);
	
	printf("\n");
		
	for(i=0;i<n;i++)
	printf("%ld at address:%d\n",*(p3+i),p3+i);
	
	printf("\n");
	
	return 0;
}


// Qno.8 Read n number of values in an array and display it in reverse order.
#include<stdio.h>
int main()
{
	int m,n;
	printf("How many elements: ");
	scanf("%d", &n);
	int inp[n];
	for(m=0;m<=(n-1);m++)
	{
		printf("Enter element: ");
		scanf("%d", &inp[m]);
	}
	printf("\nYour inputted array is: \n\t{ ");
	for(m=0; m<=(n-1); m++)
	{
		if(m==(n-1))
		printf("%d ", inp[m]);
		else
		printf("%d, ", inp[m]);
	}
	printf("}\nNow in reverse: \n\t{ ");
	for(m=(n-1); m>-1; m--)
	{
		if(m==0)
		printf("%d ", inp[m]);
		else
		printf("%d, ", inp[m]);
	}
	printf("}");
	return 0;
}



// Qno.7 Input array and prints the sum of its elements.
#include<stdio.h>
int main()
{
	int m,e,ans=0;
	printf("How many elements: ");
	scanf("%d", &e);
	int inp[e];
	for(m=0;m<=(e-1);m++)
	{
		printf("Enter element: ");
		scanf("%d", &inp[m]);
		ans = ans+(inp[m]);
	}
	printf("\nSum is: %d", ans);
	return 0;
}


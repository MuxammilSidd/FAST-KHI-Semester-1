#include <stdio.h>

int main()
{
	int n, d, i, j, swap;
	printf("ENTER N: ");
	scanf("%d", &n);
	int values[n];
	printf("ENTER d: ");
	scanf("%d", &d);
	printf("Enter values for N: ");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &values[i]);
	}

	for (i = 0; i < d; i++)
	{
		swap = values[0];
		for (j = 0; j < n - 1; j++)
		{
			values[j] = values[j + 1];
		}
		values[n - 1] = swap;
	}

	printf("New Array is: ");
	for (i = 0; i < n; i++)
	{
		printf("%d ", values[i]);
	}
}

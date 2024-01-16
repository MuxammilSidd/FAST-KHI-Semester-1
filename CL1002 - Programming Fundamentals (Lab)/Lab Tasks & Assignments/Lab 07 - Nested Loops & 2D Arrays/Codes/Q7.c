#include <stdio.h>
int main()
{
	int n_of_elements,j,i,frequancy;
	printf("Enter no of elements in array:");
	scanf("%d",&n_of_elements);
	int element[n_of_elements];
	int freq[n_of_elements];
	for(i=0;i<n_of_elements;i++)
	{
		scanf("%d",&element[i]);
	}
	for(i=0;i<n_of_elements;i++)
	{
		frequancy=1;
		if(element[i]!=-99){
		for(j=i+1;j<n_of_elements;j++){
		if(element[i]==element[j])
		{
			element[j]=-99;
			frequancy=frequancy+1;
		}
		}
		freq[i]=frequancy;
		}
	}
	for(i=0;i<n_of_elements;i++)
	{
		if(element[i]!=-99){
		printf("Frequancy of %d is %d times\n",element[i],freq[i]);
	}}
}

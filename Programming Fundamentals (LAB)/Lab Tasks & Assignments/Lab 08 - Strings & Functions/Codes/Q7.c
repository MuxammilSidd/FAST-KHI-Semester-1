// Qno.7
#include<stdio.h>
float calculateDiscount(float t,int v);
int main()
{
	float amount;
	int visit;
	printf("Enter total purchase amount: $");
	scanf("%f",&amount);
	printf("Enter number of visits to shop: ");
	scanf("%d",&visit);
	float discounted = calculateDiscount(amount,visit);
	if(discounted!=amount)
	printf("\nCongrats on your discount!\nNew amount:\t$%.2f",discounted);
	else
	printf("\nNo discount applied!\nAmount:\t$%.2f",discounted);
	return 0;
}
float calculateDiscount(float t,int v)
{
	float final;
	if(v>10 && t>50)
	final=t-(t*15/100);
	else if(v>5 && t>=30)
	final=t-(t*10/100);
	else
	final=t;
	return final;
}

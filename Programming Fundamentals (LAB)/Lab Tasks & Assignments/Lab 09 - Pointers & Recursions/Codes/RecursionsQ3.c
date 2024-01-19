//Qno.3 (Recursions)
#include<stdio.h>
int main()
{
	int m,n;
	printf("Enter two number: ");
	scanf("%d%d",&m,&n);
	int x=m,y=n;
	printf("\nUsing loops GCD = ");
	while(n!=0)
	{
		int z=n;
		n=m%n;
		m=z;
	}
	printf("%d",m);
	printf("\nUsing recursion GCD = ");
	printf("%d",greatest_cd(x,y));
	return 0;
}
int greatest_cd(int a,int b)
{
	if(b==0)
	return a;
	else
	{
		return greatest_cd(b,a%b);		
	}
}

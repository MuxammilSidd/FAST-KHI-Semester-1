//Qno.2 (Recursions)
#include<stdio.h>
int main()
{
	int m,n;
	printf("Enter two numbers: ");
	scanf("%d%d", &m,&n);
	printf("%d x %d = %d",m,n,prdt(m,n));
	return 0;
}
int prdt(int a,int b)
{
	if(a==0 || b==0)
	return 0;
	else
	return (a+prdt(a,b-1));
}

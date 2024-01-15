//Qno.2
#include<stdio.h>
//int calc();
int main()
{
	int a,b;
	char op;
	printf("Enter two numbers: ");
	scanf("%d%d", &a,&b);
	printf("Enter operation: ");
	fflush(stdin);
	scanf("%c",&op);

	int m = calc(a,b,op);
	printf("%d %c %d = %d",a,op,b,m);
	return 0;
}

void calc(int x,int y,char z)
{
	int ans;
	switch(z)
	{
		case '+':
			{
				ans = x+y;
				break;
			}
		case '-':
			{
				ans = x-y;
				break;
			}
		case '*':
			{
				ans = x*y;
				break;
			}
		case '/':
			{
				ans = x/y;
				break;
			}	
	}
}


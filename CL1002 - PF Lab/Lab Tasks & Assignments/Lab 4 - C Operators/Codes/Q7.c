//C Program to Find Smallest of Three Numbers without using IF Conditions and loops.
#include<stdio.h>
int main()
{
	int num1, num2, num3;
	printf("Enter three different numbers: ");
	scanf("%d %d %d", &num1, &num2, &num3);
	
	printf("%s",num1<num2 && num1<num3 ? "Num1 is smallest" : num2<num3 && num2<num1 ? "Num2 is smallest" : "Num3 is smallest");
	return 0;
}


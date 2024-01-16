// Qno.4 C program to print the English representation of the numbers
#include<stdio.h>
int main()
{
	int a,b,m;
	printf("Enter first number: ");
	scanf("%d", &a);
	printf("Enter second number: ");
	scanf("%d", &b);
	
	for(m=a; m<=b; m++)
	{
		if(m>=a && m<b)
			{
				if(m<=9)
					{
						switch(m)
						{
							case 1:
								{
									printf("One, ");
									continue;						
								}
							case 2:
								{
									printf("Two, ");
									continue;						
								}
							case 3:
								{
									printf("Three, ");
									continue;						
								}
							case 4: 
								{
									printf("Four, ");
									continue;					
								}
							case 5: 
								{
									printf("Five, ");
									continue;					
								}
							case 6:
								{
									printf("Six, ");
									continue;						
								}
							case 7:
								{
									printf("Seven, ");
									continue;						
								}
							case 8:
								{
									printf("Eight, ");
									continue;						
								}
							case 9:
								{
									printf("Nine, ");
									continue;						
								}
						}
					}
				else
					{
						if(m%2==0)
							printf("Even, ");
						else
							printf("Odd, ");
					}
			}
		if(m==b)
			{
				if(m<=9)
					{
						switch(m)
						{
							case 1:
								{
									printf("One");
									continue;						
								}
							case 2:
								{
									printf("Two");
									continue;						
								}
							case 3:
								{
									printf("Three");
									continue;						
								}	
							case 4: 
								{
									printf("Four");
									continue;					
								}
							case 5: 
								{
									printf("Five");
									continue;					
								}
							case 6:
								{
									printf("Six");
									continue;						
								}
							case 7:
								{
									printf("Seven");
									continue;						
								}
							case 8:
								{
									printf("Eight");
									continue;						
								}
							case 9:
								{
									printf("Nine");
									continue;						
								}
						}
					}
				else
					{
						if(m%2==0)
							printf("Even");
						else
							printf("Odd");
					}			
			}
	}
	return 0;
}


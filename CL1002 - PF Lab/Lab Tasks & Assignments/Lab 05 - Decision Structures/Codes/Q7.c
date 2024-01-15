#include<stdio.h>
int main()
{
	int ty, qnty1, qnty2, qnty3, qnty4, i1_pr, i2_pr, i3_pr, i4_pr;
	char item1, item2, item3, item4;
	
	printf("\t\tFAST SHAWARMA Online Order Placement");
	printf("\n\t\t\t******WELCOME******");
	printf("\nSelect from Menu:");
	printf("\nB => Burger\nF =>French Fries\nP => Pizza\nS => Sandwich");
	printf("\n\n\tHow many types of snacks to order?  ");
	printf("\n\tSelect from 2,3 or 4: =>  ");
	scanf("%d", &ty);
	
	switch(ty)
	{
		case 2:
			{
				printf("\nEnter first snack: ");
				scanf(" %c", &item1);
				printf("Please enter quantity: ");
				scanf(" %d", &qnty1);
				printf("\nEnter second snack: ");
				scanf(" %c", &item2);
				printf("Please enter quantity: ");
				scanf(" %d", &qnty2);
				printf("\n--------------------------------------------------------------");
				printf("\nYour order: \n");
				printf("\n %d",qnty1);
					switch(item1)
					{
						case 'B':							
						{									
						i1_pr = qnty1*200;	
						printf(" Burger value: %d PKR",i1_pr);
						break;
						}
						case 'P':
						{
						i1_pr = qnty1*500;
						printf(" Pizza value: %d PKR",i1_pr);
						break;
						}
						case 'F':
						{
						i1_pr = qnty1*50;
						printf(" French fries value: %d PKR",i1_pr);
						break;
						}
						case 'S':
						{	
						i1_pr = qnty1*150;
						printf(" Sandwich value: %d PKR",i1_pr);
						break;
						}
					}
				printf("\n %d",qnty2);
					switch(item2)
					{
						case 'B':
						{
						i2_pr = qnty2*200;
						printf(" Burger value: %d PKR",i2_pr);
						break;
						}
						case 'P':
						{
						i2_pr = qnty2*500;
						printf(" Pizza value: %d PKR",i2_pr);
						break;
						}
						case 'F':
						{
						i2_pr = qnty2*50;
						printf(" French Fries value: %d PKR",i2_pr);
						break;
						}
						case 'S':
						{
						i2_pr = qnty2*150;
						printf(" Sandwich value: %d PKR",i2_pr);
						break;
						}	
					}	
				printf("\n\n\tTotal Bill: %d PKR", i1_pr+i2_pr);
				printf("\n\n\t\tThankyou for your order from FAST SHAWARMA!");
				break;
			}
		case 3:
			{
				printf("\nEnter first snack: ");
				scanf(" %c", &item1);
				printf("Please enter quantity: ");
				scanf("%d", &qnty1);
				printf("\nEnter second snack: ");
				scanf(" %c", &item2);
				printf("Please enter quantity: ");
				scanf("%d", &qnty2);
				printf("\nEnter third snack: ");
				scanf(" %c", &item3);
				printf("Please enter quantity: ");
				scanf("%d", &qnty3);
				printf("\n--------------------------------------------------------------");
				printf("\nYour order: ");
				printf("\n %d",qnty1);
					switch(item1)
					{
						case 'B':							
						{									
						i1_pr = qnty1*200;	
						printf(" Burger value: %d PKR",i1_pr);
						break;
						}
						case 'P':
						{
						i1_pr = qnty1*500;
						printf(" Pizza value: %d PKR",i1_pr);
						break;
						}
						case 'F':
						{
						i1_pr = qnty1*50;
						printf(" French fries value: %d PKR",i1_pr);
						break;
						}
						case 'S':
						{	
						i1_pr = qnty1*150;
						printf(" Sandwich value: %d PKR",i1_pr);
						break;
						}
					}
				printf("\n %d",qnty2);
					switch(item2)
					{
						case 'B':
						{
						i2_pr = qnty2*200;
						printf(" Burger value: %d PKR",i2_pr);
						break;
						}
						case 'P':
						{
						i2_pr = qnty2*500;
						printf(" Pizza value: %d PKR",i2_pr);
						break;
						}
						case 'F':
						{
						i2_pr = qnty2*50;
						printf(" French Fries value: %d PKR",i2_pr);
						break;
						}
						case 'S':
						{
						i2_pr = qnty2*150;
						printf(" Sandwich value: %d PKR",i2_pr);
						break;
						}	
					}
				printf("\n %d",qnty3);
					switch(item3)
					{
						case 'B':
						{
						i3_pr = qnty3*200;
						printf(" Burger value: %d PKR",i3_pr);
						break;
						}
						case 'P':
						{
						i3_pr = qnty3*500;
						printf(" Pizza value: %d PKR",i3_pr);
						break;
						}
						case 'F':
						{
						i3_pr = qnty3*50;
						printf(" French Fries value: %d PKR",i3_pr);
						break;
						}
						case 'S':
						{
						i3_pr = qnty3*150;
						printf(" Sandwich value: %d PKR",i3_pr);
						break;
						}	
					}
				printf("\n\n\tTotal Bill: %d PKR", i1_pr+i2_pr+i3_pr);
				printf("\n\n\t\tThankyou for your order from FAST SHAWARMA!");
				break;
			}
		case 4:
			{
				printf("\nEnter first snack: ");
				scanf(" %c", &item1);
				printf("Please enter quantity: ");
				scanf("%d", &qnty1);
				printf("\nEnter second snack: ");
				scanf(" %c", &item2);
				printf("Please enter quantity: ");
				scanf("%d", &qnty2);
				printf("\nEnter third snack: ");
				scanf(" %c", &item3);
				printf("Please enter quantity: ");
				scanf("%d", &qnty3);
				printf("\nEnter fourth snack: ");
				scanf(" %c", &item4);
				printf("Please enter quantity: ");
				scanf("%d", &qnty4);
				printf("\n--------------------------------------------------------------");
				printf("\nYour order: ");
				printf("\n %d",qnty1);
					switch(item1)
					{
						case 'B':							
						{									
						i1_pr = qnty1*200;	
						printf(" Burger value: %d PKR",i1_pr);
						break;
						}
						case 'P':
						{
						i1_pr = qnty1*500;
						printf(" Pizza value: %d PKR",i1_pr);
						break;
						}
						case 'F':
						{
						i1_pr = qnty1*50;
						printf(" French fries value: %d PKR",i1_pr);
						break;
						}
						case 'S':
						{	
						i1_pr = qnty1*150;
						printf(" Sandwich value: %d PKR",i1_pr);
						break;
						}
					}
				printf("\n %d",qnty2);
					switch(item2)
					{
						case 'B':
						{
						i2_pr = qnty2*200;
						printf(" Burger value: %d PKR",i2_pr);
						break;
						}
						case 'P':
						{
						i2_pr = qnty2*500;
						printf(" Pizza value: %d PKR",i2_pr);
						break;
						}
						case 'F':
						{
						i2_pr = qnty2*50;
						printf(" French Fries value: %d PKR",i2_pr);
						break;
						}
						case 'S':
						{
						i2_pr = qnty2*150;
						printf(" Sandwich value: %d PKR",i2_pr);
						break;
						}	
					}
				printf("\n %d",qnty3);
					switch(item3)
					{
						case 'B':
						{
						i3_pr = qnty3*200;
						printf(" Burger value: %d PKR",i3_pr);
						break;
						}
						case 'P':
						{
						i3_pr = qnty3*500;
						printf(" Pizza value: %d PKR",i3_pr);
						break;
						}
						case 'F':
						{
						i3_pr = qnty3*50;
						printf(" French Fries value: %d PKR",i3_pr);
						break;
						}
						case 'S':
						{
						i3_pr = qnty3*150;
						printf(" Sandwich value: %d PKR",i3_pr);
						break;
						}	
					}
				printf("\n %d",qnty4);
					switch(item4)
					{
						case 'B':
						{
						i4_pr = qnty4*200;
						printf(" Burger value: %d PKR",i4_pr);
						break;
						}
						case 'P':
						{
						i4_pr = qnty4*500;
						printf(" Pizza value: %d PKR",i4_pr);
						break;
						}
						case 'F':
						{
						i4_pr = qnty4*50;
						printf(" French Fries value: %d PKR",i4_pr);
						break;
						}
						case 'S':
						{
						i4_pr = qnty4*150;
						printf(" Sandwich value: %d PKR",i4_pr);
						break;
						}	
					}	
				printf("\n\n\tTotal Bill: %d PKR", i1_pr+i2_pr+i3_pr+i4_pr);
				printf("\n\n\t\tThankyou for your order from FAST SHAWARMA!");
				break;
			}	
		default:
			{
				printf("\nInvalid input!");
			}
	}
	return 0;
}


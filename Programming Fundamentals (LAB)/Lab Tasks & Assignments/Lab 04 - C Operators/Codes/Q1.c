// Convert pennies to Quarters, Dimes & Nickels
#include<stdio.h>
int main()
{
	int pennies = 368, quart, dime, nick;
	quart = pennies/25;
	pennies %= 25;
	
	dime =  pennies/10;
	pennies %= 10;
	
	nick = pennies/5;
	pennies %= 5;
	
	printf("Ali can carry \n\t %d Quarters \n\t %d Dimes \n\t %d Nickels \n\t %d Pennies ", quart, dime, nick, pennies);
	return 0;
}


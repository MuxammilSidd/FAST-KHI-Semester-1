/* Convert the below formulas in C:
1. 10 *(2^3) 2. 12 *(2) 3. 10 / (2^3) 4. 14 *(2^5) 5. 12 / (2^5)
Note: Do not use any arithmetic operator and any built-in math function. */

#include<stdio.h>
void main()
{
	int ans = 12>>5;		// Here 5 means 32 (or 2^5) Bitwise
	printf("%d",ans);		// Digits after decimal point are eliminated
}




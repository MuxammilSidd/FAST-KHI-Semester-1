// Qno.3 Compute the LCM and GCD of two numbers
#include<stdio.h>
int main() {
	int m,n,x,ans1,ans2;
	printf("Enter first number: ");
	scanf("%d", &m);
	printf("Enter second number: ");
	scanf("%d", &n);
	int f=m, g=n, y;

	while(g!=0) {
		x=g;
		g=f%g;
		f=x;
	}
	ans1 = f;
	printf("GCD is %d", ans1);
	ans2= (m*n)/ans1;
	printf("\nLCM is %d", ans2);
	return 0;
}



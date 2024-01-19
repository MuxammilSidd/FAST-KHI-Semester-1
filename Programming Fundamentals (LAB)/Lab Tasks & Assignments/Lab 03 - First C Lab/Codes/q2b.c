/* QUESTION#2
Write a C program to print the following pattern using escape sequences.
increase the SNO automatically, do not insert numbers manually. */

#include<stdio.h>
void main()
{
	int a=1;
	printf("SNO\tFirst Name\tLast Name\tFather Name\tCast\tCity Name");
	printf("\n%d\tMuhammad\tJaffar\t\tM. Siddique\tKorejo\tKarachi",a);
	printf("\n%d\tShafique\tRehman\t\tM. Ayoob\tPanhwar\tN.Feroze",++a);
	printf("\n%d\tMuhammad\tKhalid\t\tSajan Khan\tShaikh\tMoro",++a);
	printf("\n%d\tRubaas\t\tAli\t\tAslam Ali\tShah\tHyderabad",++a);
	printf("\n%d\tAli\t\tHassan\t\tG. Mustufa\tBhutto\tLahore",++a);
	
	return 0;
}


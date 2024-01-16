// Qno.5 Write a program to control a coffee machine.
#include<stdio.h>
int main()
{
	char ty, sz;
	printf("Input type of coffee: \n\tB for Black and W for White:\n");
	scanf(" %c", &ty);
	printf("\nEnter cup size: \n\tS for Single and D for Double:\n");
	scanf(" %c", &sz);
	
	int w_water=15, w_sugar=15, w_mix=20, w_cof=2, w_milk=4;
	int w_time = w_water+w_sugar+w_mix+w_cof+w_milk+w_mix;
	int b_water=20, b_sugar=20, b_mix=25, b_cof=15;
	int b_time = b_water+b_sugar+b_mix+b_cof+b_mix;
	float wd_water=w_water+(w_water*0.5);
	float wd_sugar=w_sugar+(w_sugar*0.5);
	float wd_mix=w_mix+(w_mix*0.5);
	float wd_cof=w_cof+(w_cof*0.5);
	float wd_milk=w_milk+(w_milk*0.5);
	float wd_time=wd_water+wd_sugar+wd_mix+wd_cof+wd_milk+wd_mix;
	float bd_water=b_water+(b_water*0.5);
	float bd_sugar=b_sugar+(b_sugar*0.5);
	float bd_mix=b_mix+(b_mix*0.5);
	float bd_cof=b_cof+(b_cof*0.5);
	float bd_time=bd_water+bd_sugar+bd_mix+bd_cof+bd_mix;
	
	switch(ty)
	{
		case 'B':
			{
				switch(sz)
				{
					case 'S':
						{
							printf("\nPut water: %d mins", b_water);
							printf("\nSugar: %d mins", b_sugar);
							printf("\nMix well: %d mins", b_mix);
							printf("\nAdd coffee: %d mins", b_cof);
							printf("\nMix well: %d mins", b_mix);
							printf("\n\n\tTotal time for preparing: %d mins",b_time);
							break;
						}
					case 'D':
						{
							printf("\nPut water: %.0f mins",bd_water);
							printf("\nSugar: %.0f mins",bd_sugar);
							printf("\nMix well: %.1f mins",bd_mix);
							printf("\nAdd coffee: %.1f mins",bd_cof);
							printf("\nMix well: %.1f mins",bd_mix);
							printf("\n\n\tTotal time for preparing: %.1f mins",bd_time);
							break;
						}
				}
				break;
			}
			case 'W':
			{
				switch(sz)
				{
					case 'S':
						{
							printf("\nPut water: %d mins",w_water);
							printf("\nSugar: %d mins",w_sugar);
							printf("\nMix well: %d mins",w_mix);
							printf("\nAdd coffee: %d mins",w_cof);
							printf("\nAdd milk: %d mins",w_milk);
							printf("\nMix well: %d mins",w_mix);
							printf("\n\n\tTotal time for preparing: %d mins",w_time);	
							break;
						}
					case 'D':
						{
							printf("\nPut water: %.1f mins",wd_water);
							printf("\nSugar: %.1f mins",wd_sugar);
							printf("\nMix well: %.0f mins",wd_mix);
							printf("\nAdd coffee: %.0f mins",wd_cof);
							printf("\nAdd milk: %.0f mins",wd_milk);
							printf("\nMix well: %.0f mins",wd_mix);	
							printf("\n\n\tTotal time for preparing: %.1f mins",wd_time);
							break;
						}
				}
				break;
			}
		
			default:
				{
					printf("Enter valid input!");
				}	
	}
	return 0;
}


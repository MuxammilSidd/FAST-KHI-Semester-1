//Qno6 Muzammil
#include<stdio.h>

struct date 
{
    int day;
    int mth;
    int yr;
};

int main() 
{
    struct date today;

    printf("Enter today's date:\n (Day-Month-Year)\n");
    scanf("%d%d%d", &today.day, &today.mth, &today.yr);
    int q = 45;
	int mth_days;
	
	if(today.day>31 || today.mth>12)
	{
		printf("Invalid!");
	}
	else
	{
	    while (q > 0) 
		{
	        switch(today.mth) 
			{
	            case 1: 
				case 3: 
				case 5: 
				case 7: 
				case 8: 
				case 10: 
				case 12:
				{
	                mth_days = 31;
	                break;
	        	}
	            case 4: 
				case 6: 
				case 9: 
				case 11:
				{
	                mth_days = 30;
	                break;
	            }
	            case 2:
	            {
	                if((today.yr%4==0 && today.yr%100!=0) || today.yr%400==0) 
	                {
	                    mth_days = 29;
	                } 
					else 
					{
	                    mth_days = 28;
	                }
	                break;
	            }
	        }
	
	        if (q >= (mth_days - today.day + 1))
			{
	            q = q - (mth_days - today.day + 1);
	            today.mth++;
	
	            if (today.mth>12) 
				{
	                today.mth = 01;
	                today.yr++;
	            }
	
	            today.day = 01;
	        } 
			else 
			{
	            today.day += q;
	            q=0;
	        }
	    }
	
	    printf("\nDate after 45 days:\n%d-%d-%d\n", today.day, today.mth, today.yr);
	}
    return 0;
}


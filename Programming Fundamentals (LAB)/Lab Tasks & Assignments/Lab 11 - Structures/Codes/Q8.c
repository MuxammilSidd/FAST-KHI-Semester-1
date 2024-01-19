//Qno8 Muzammil
#include<stdio.h>
#define N 5
struct box{
	float length;
	float width;
	float height;
};
int main()
{
	struct box b[N];
	int i,a=0;
	for(i=0;i<N;i++)
	{
		printf("\n\nBox#%d:\n",i+1);
		printf("Enter Length: ");
		scanf("%f",&b[i].length);
		printf("Enter Widht: ");
		scanf("%f",&b[i].width);
		printf("Enter Height: ");
		scanf("%f",&b[i].height);
	}
	for(i=0;i<N;i++)
	{
		if(b[i].height<41.0)
		a++;
	}
	if(a>0)
	{
		printf("\n\n%d Boxes can pass.\n",a);
		printf("Volume of Boxes that can pass tunnel:\n");	
		for(i=0;i<N;i++)
		{
			if(b[i].height<41.0)
			{
				printf("%.0f\n",(b[i].length)*(b[i].width)*(b[i].height));
			}
		}
	}
	else
	printf("\n\nNo boxes from provided input can pass tunnel.");
	return 0;
}

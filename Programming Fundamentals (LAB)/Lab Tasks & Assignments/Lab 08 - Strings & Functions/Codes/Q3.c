// Qno.3
#include<stdio.h>
#include<string.h>
int main()
{
	char sen[1000];
	int i,b=0;
	char inp;
	printf("Enter text input: \n");
	gets(sen);
	printf("Enter character to lookup: ");
	scanf("%c",&inp);
	printf("\n");
	
	for(i=0;i<strlen(sen);i++)
	{
		strchr(sen,inp);
		if(sen[i]==inp)
		{
			b++;
		}
	}
	printf("Inputted string: \n");
	puts(sen);
	printf("\nTotal count of occurrences of %c: ",inp);
	printf("%d",b);
	return 0;
}


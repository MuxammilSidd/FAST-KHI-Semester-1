//Qno7 Muzammil
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N_BOOKS 5
struct book{
	int acc_num;
	char author[20];
	char title[40];
	int flag;
};
int main()
{
	struct book *b = (struct book *)malloc(N_BOOKS * sizeof(struct book));
	int i,c;
	int n = N_BOOKS;
	printf("Feed books info:\n\n");
	for(i=0;i<N_BOOKS;i++)
	{
		printf("\nBook#%d\n",i+1);
		printf("Enter accession number: ");
		scanf("%d",&b[i].acc_num);
		fflush(stdin);
		printf("Enter book title: ");
		gets(b[i].title);
		fflush(stdin);
		printf("Enter author name: ");
		gets(b[i].author);
		printf("Enter status (1=Issued\t0=Available): ");
		scanf("%d",&b[i].flag);
	}
	system("cls");
	int run;
	
	while(c!=7)
	{
		printf("********Welcome Jinnah Library********");
		printf("\n\nPress\n\n");
		printf("1. Display Book Info.\n2. Add new book.\n3. Display books of an author.\n4. Display the total number of a particular book.\n5. Display the total number of books.\n6. Issue a book.\n7. Exit.\n\n");
		scanf("%d",&c);
		printf("\n");
		switch(c)
		{
			case 1:
				{
					int a=0;
					char inp_book[40];
					printf("Enter book name: ");
					fflush(stdin);
					gets(inp_book);
					printf("\nInfo:\n");
					for(i=0;i<n;i++)
					{
						if(strcmp(b[i].title,inp_book)==0)
						{
							a++;
						}
					}
					printf("%d matches found!\n\n",a);
					for(i=0;i<n;i++)
					{
						if(strcmp(b[i].title,inp_book)==0)
						{
							printf("Title: '%s'\n",b[i].title);
							printf("Author: '%s'\n",b[i].author);
							printf("Accession number: %d\n",b[i].acc_num);
							if(b[i].flag==1)
							printf("Status: Issued\n\n");
							else
							printf("Status: Available\n\n");
						}
					}
					printf("\n\n7.EXIT?\t8.CONTINUE?\n\n");
					scanf("%d",&c);
					break;
				}
			case 2:
				{
					n++;
					b=realloc(b,n*sizeof(struct book));
					printf("\nBook#%d\n",n);
					printf("Enter accession number: ");
					scanf("%d",&b[i].acc_num);
					fflush(stdin);
					printf("Enter book title: ");
					gets(b[i].title);
					fflush(stdin);
					printf("Enter author name: ");
					gets(b[i].author);
					printf("Enter status (1=Issued\t0=Available): ");
					scanf("%d",&b[i].flag);
					printf("*BOOK ADDED SUCCESSFULLY*");
					
					printf("\n\n7.EXIT?\t8.CONTINUE?\n\n");
					scanf("%d",&c);
					break;
				}
			case 3:
				{
					int a=0;
					char inp_author[20];
					printf("Enter author name: ");
					fflush(stdin);
					gets(inp_author);
					printf("\nBooks by '%s'\n\n",inp_author);
					for(i=0;i<n;i++)
					{
						if(strcmp(b[i].author,inp_author)==0)
						{
							a++;
							printf("#%d.%s\n",a,b[i].title);
						}
					}
					
					printf("\n\n7.EXIT?\t8.CONTINUE?\n\n");
					scanf("%d",&c);
					break;
				}
			case 4:
				{
					int a=0;
					char inp_book[40];
					printf("Enter book name: ");
					fflush(stdin);
					gets(inp_book);
					for(i=0;i<n;i++)
					{
						if(strcmp(b[i].title,inp_book)==0)
						a++;
					}
					printf("Total books with title: '%s'\t= %d",inp_book,a);
					printf("\n\n7.EXIT?\t8.CONTINUE?\n\n");
					scanf("%d",&c);
					break;
				}
			case 5:
				{
					int total=n;
					printf("Total number of books in Jinnah Library: %d",n);
					printf("\n\n7.EXIT?\t8.CONTINUE?\n\n");
					scanf("%d",&c);
					break;
				}
			case 6:
				{
					int a=0;
					char inp_book[40];
					printf("Enter book name: ");
					fflush(stdin);
					gets(inp_book);
					for(i=0;i<n;i++)
					{
						if(strcmp(b[i].title,inp_book)==0 && b[i].flag==0)
						{
							a++;	
							b[i].flag=1;
						}
					}
					if(a>0)
					{
						printf("\nAvailable: %d",n);
						printf("\n*ISSUED*");
						n--;
						printf("\n\nRemaining books in Library: %d",n);
					}
					else
					printf("\n*No books available. PLEASE SELECT ANOTHER*");
					printf("\n\n7.EXIT?\t8.CONTINUE?\n\n");
					scanf("%d",&c);
					break;
				}
		}
		system("cls");
	}
	
	free(b);
	return 0;
}

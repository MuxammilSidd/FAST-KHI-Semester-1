//Qno4 Muzammil
#include<stdio.h>
int main()
{
    FILE *muz_file = fopen("Testfileq4.txt","r");
    int i=0;
    char lt;
    if(muz_file!=NULL)
    {
        do
        {
            lt = fgetc(muz_file);
            if(lt=='m')
            {
                i++;
            }
        }
        while(lt!=EOF);
        printf("The alphabet 'm' appeared %d times!",i);
        fclose(muz_file);
    }
    
    else
    {
        printf("File could not be open");
    }
    return 0;
}
//Qno5 Muzammil
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char *sen = (char *)calloc(100,sizeof(char));
    char *enc = (char *)calloc(100,sizeof(char));
    char *dec = (char *)calloc(100,sizeof(char));
    int i;
    printf("Enter string to apply encryption: \n");
    gets(sen);

    sen = (char *)realloc(sen,(strlen(sen))*sizeof(char));
    enc = (char *)realloc(enc,(strlen(sen))*sizeof(char));
    dec = (char *)realloc(dec,(strlen(sen))*sizeof(char));

    FILE *muz_file = fopen("secret.txt","w");
    if(muz_file!=NULL)
    {
        printf("\nOriginal:\n%s\n",sen);
        
        for(i=0;i<strlen(sen);i++)
        {
            enc[i] = (char)(sen[i]+(i+1));
        }
        fprintf(muz_file,"%s",enc);
        printf("Encrypted text inserted in file:\n%s",enc);
        fclose(muz_file);

        muz_file = fopen("secret.txt","r");
        i=0;
        int e_lt;
        do
        {
            e_lt = fgetc(muz_file);
            e_lt -= (i+1);
            dec[i] = (char)e_lt;
            i++;
        }
        while(e_lt!=EOF && i < strlen(sen));
        dec[i]='\0';
        printf("\n\nDecrypted text Read then decoded from file:\n%s",dec);
        fclose(muz_file);
    }

    else
    {
        printf("Encrypted file could not be open!");
    }

    free(enc);
    free(dec);
    free(sen);
    return 0;
}
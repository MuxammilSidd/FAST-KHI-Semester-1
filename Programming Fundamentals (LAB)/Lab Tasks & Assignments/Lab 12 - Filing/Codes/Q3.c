//Qno3 Muzammil
#include<stdio.h>

struct mobile{
    char c_name[20];
    char m_name[20];
    int ram;
    int rom;
    int price;
};
int main()
{
    int phones;
    printf("Enter number of phones: ");
    scanf("%d",&phones);
    struct mobile m[phones];
    int i;
    printf("\n");

    FILE *muz_file = fopen("mobiles.bin","wb");
    if(muz_file!=NULL)
    {
        for(i=0;i<phones;i++)
        {
            printf("Mobile#%d:\n",i+1);

            fflush(stdin);
            printf("Enter company name: ");
            gets(m[i].c_name);
    
            fflush(stdin);
            printf("Enter model name: ");
            gets(m[i].m_name);
            
            printf("Enter ram: ");
            scanf("%d",&m[i].ram);
            
            printf("Enter rom: ");
            scanf("%d",&m[i].rom);
        
            printf("Enter price: ");
            scanf("%d",&m[i].price);
            printf("\n\n");

            fwrite(&m[i],sizeof(struct mobile),1,muz_file);
            
        }
        fclose(muz_file); 
        muz_file = fopen("mobiles.bin","rb");
        printf("\n\n");

        for(i=0;i<phones;i++)
        {
            fread(&m[i],sizeof(struct mobile),1,muz_file);
            printf("Company:\t%s\t\tModel: %s Ram: %d Rom: %d Price: %d\n",m[i].c_name,m[i].m_name,m[i].ram,m[i].rom,m[i].price);
            
        }
            
        fclose(muz_file);      
    }
    else
    {
        printf("Could not open file!");
    }
    return 0;
}
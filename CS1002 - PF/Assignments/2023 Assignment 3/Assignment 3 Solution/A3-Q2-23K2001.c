#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

struct employee{
    char name[20];
    char role[10];
    int comms;
    int teamw;
    int crvty;
};

struct dpt{
    struct employee emp[5];
};

int nametaken[20] = {0};

void initialize_dpt(struct dpt *a, char namelist[][20], char rolelist[][15])
{
    int i,j,x,y,z;
    int roletaken[5]={0};
    srand(time(NULL));
    for(i=0;i<5;i++)
    {
        do 
        {
            x = rand() % 20;
        } while (nametaken[x]); 
        strcpy(a->emp[i].name,namelist[x]);
        nametaken[x] = 1; 

        do
        {
            y = rand() % 5;
        } while (roletaken[y]); 
        strcpy(a->emp[i].role,rolelist[y]);
        roletaken[y] = 1;

        z = (rand() % 100) + 1;
        a->emp[i].comms = z;
        z = (rand() % 100) + 1;
        a->emp[i].teamw = z;
        z = (rand() % 100) + 1;
        a->emp[i].crvty = z;
    }
}

void best_dpt(struct dpt a, struct dpt b, struct dpt c, struct dpt d, int *s_a,int *s_b, int* s_c, int *s_d, struct dpt *best, int *s_best,char name_bestdept[])
{
    int j;
    for(j=0;j<5;j++)
    {
        *s_a += (a.emp[j].comms+a.emp[j].teamw+a.emp[j].crvty);
        *s_b += (b.emp[j].comms+b.emp[j].teamw+b.emp[j].crvty);
        *s_c += (c.emp[j].comms+c.emp[j].teamw+c.emp[j].crvty);
        *s_d += (d.emp[j].comms+d.emp[j].teamw+d.emp[j].crvty);     
    }

    if(*s_a > *s_b && *s_a > *s_c && *s_a > *s_d)
    {
        *best = a; 
        *s_best = *s_a;
        strcpy(name_bestdept,"HR");
    }
    else if(*s_b > *s_a && *s_b > *s_c && *s_b > *s_d)
    {
        *best = b;
        *s_best = *s_b;
        strcpy(name_bestdept,"Finance");
    }
    else if(*s_c > *s_b && *s_c > *s_a && *s_c > *s_d)
    {
        *best = c; 
        *s_best = *s_c;
        strcpy(name_bestdept,"Marketing");
    }
    else
    {
        *best = d; 
        *s_best = *s_d;
        strcpy(name_bestdept,"Logistics");    
    }
}

int main()
{
    printf("23K-2001\n");
	printf("Muzammil\n\n");

    char emp_names[20][20]={"Achelous","Echidna","Charybdis","Typhon","Eris",
                            "Pandora","Nemesis","Asclepius","Lethe","Hecate",
                            "Pan","Morpheus","Selene","Boreas","Hecatonchires",
                            "Gorgons","Sphinx","Naiads","Dryads","Oreads"};
    char r[5][15]={"Director","Executive","Manager","Employee","Trainee"};
    int i,j;

	struct dpt HR;
	initialize_dpt(&HR, emp_names, r);
	
    struct dpt finance;
	initialize_dpt(&finance, emp_names, r);
	
    struct dpt marketing;
	initialize_dpt(&marketing, emp_names, r);
	
    struct dpt logi;
	initialize_dpt(&logi, emp_names, r);

    int sum_hr=0,sum_f=0,sum_m=0,sum_l=0,win_s=0;
    struct dpt win;
    char win_name[20];

    best_dpt(HR,finance,marketing,logi,&sum_hr,&sum_f,&sum_m,&sum_l,&win,&win_s,win_name);
    
    printf("***Pioneers Limited Corporation (Pvt.Ltd)***");
    printf("\n\nDepartment:\tScore:\n\n");
    printf("HR \t%13d\nFinance \t%5d\nMarketing \t%5d\nLogistics \t%5d\n\n",sum_hr,sum_f,sum_m,sum_l);
    printf("\t\t\t-----Best Department-----\n\n");
    printf("%s\t\t\tTotal score: %d\n\n", win_name, win_s);
    printf("s#:\tEmployee Name:\t\tRole:\t\tCommunications:\t\tTeamwork:\tCreativity:\n\n");
    for(i=0;i<5;i++)
    {
        printf("%d\t",i+1);
        printf("%-20s\t",win.emp[i].name);
        printf("%-10s\t",win.emp[i].role);
        printf("%8d\t\t",win.emp[i].comms);
        printf("%5d\t\t",win.emp[i].teamw);
        printf("%6d\t\n",win.emp[i].crvty);
    }
    return 0;
}

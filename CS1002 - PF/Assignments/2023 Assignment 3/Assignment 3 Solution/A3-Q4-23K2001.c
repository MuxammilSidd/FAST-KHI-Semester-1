#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define WORKERS 8

struct workr {
    int w_id;
    char f_name[15];
    char l_name[15];
    int slry;
    char j_date[11];
    char dpt[10];
};
struct bonus{
    int w_id;
    char b_date[11];
    int b_amount;
};
struct title{
    int w_id;
    char w_title[20];
    char a_date[11];
};

int main() 
{
    printf("23K-2001\n");
    printf("Muzammil\n\n");

    struct workr w[WORKERS];
    int i;
    for(i=0;i<WORKERS;i++) 
    {
        printf("ID: ");
        scanf("%d", &w[i].w_id);
        printf("First name: ");
        scanf("%s", w[i].f_name);
        printf("Last name: ");
        scanf("%s", w[i].l_name);
        printf("Salary: ");
        scanf("%d", &w[i].slry);
        printf("Joining Date: ");
        scanf("%s", w[i].j_date);
        printf("Department: ");
        scanf("%s", w[i].dpt);
        printf("\n");
    }

    int x = -1, y = -1, z = -1;
    int max_hr_s = -1, max_adm_s = -1, max_acc_s = -1;
    int max_hr_id = -1, max_adm_id = -1, max_acc_id = -1;
    long int hr_total = 0,adm_total=0,acc_total=0;
    
    for (i = 0; i < WORKERS; i++) 
    {
        if (strcmp(w[i].dpt, "HR") == 0) 
        {
            if (w[i].slry > max_hr_s) 
            {
                max_hr_s = w[i].slry;
                max_hr_id = w[i].w_id;
                x = i;
            }
            hr_total+=w[i].slry;
        } 
        else if (strcmp(w[i].dpt, "Admin") == 0) 
        {
            if (w[i].slry > max_adm_s) 
            {
                max_adm_s = w[i].slry;
                max_adm_id = w[i].w_id;
                y = i;
            }
            adm_total+=w[i].slry;
        } 
        else if (strcmp(w[i].dpt, "Account") == 0) 
        {
            if (w[i].slry > max_acc_s) 
            {
                max_acc_s = w[i].slry;
                max_acc_id = w[i].w_id;
                z = i;
            }
            acc_total+=w[i].slry;
        }
    }

    printf("%d\t| %-15s | %-15s |  %d  | %10s | %s", max_hr_id, w[x].f_name, w[x].l_name, max_hr_s, w[x].j_date, "HR");
    printf("\n%d\t| %-15s | %-15s |  %d  | %10s | %s", max_adm_id, w[y].f_name, w[y].l_name, max_adm_s, w[y].j_date, "Admin");
    printf("\n%d\t| %-15s | %-15s |  %d  | %10s | %s", max_acc_id, w[z].f_name, w[z].l_name, max_acc_s, w[z].j_date, "Account");
    printf("\n\nTotal Salaries by each department:");
    printf("\nHR: %ld\nAdmin: %ld\nAccounts: %ld",hr_total,adm_total,acc_total);

    return 0;
}

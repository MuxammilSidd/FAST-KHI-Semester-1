#include <stdio.h>

int main() {
    int x, i, y, j, tab = 0, teb = 0, teb_max = 0, bmax, pmax;
    int mmax = 0; // Initialize mmax to zero

    printf("Enter number of branches: ");
    scanf("%d", &x);

    printf("Enter number of mobile phones: ");
    scanf("%d", &y);

    int junaid_bhai[x][y];

    for (i = 0; i < x; i++) {
        printf("BRANCH NO %d: ", i + 1);
        for (j = 0; j < y; j++) {
            scanf("%d", &junaid_bhai[i][j]);
            if (mmax < junaid_bhai[i][j]) {
                mmax = junaid_bhai[i][j];
                bmax = i + 1;
                pmax = j + 1;
            }
        }
    }

    for (i = 0; i < x; i++) {
        printf("Total of BRANCH %d: ", i + 1);
        for (j = 0; j < y; j++) {
            teb = teb + junaid_bhai[i][j];
        }
        printf("%d\n");
        if (i == 0) {
            teb_max = teb;
        }
        if (teb > teb_max) {
            teb_max = teb;
            bmax = i + 1; // Update the branch ID where the maximum is reached
        }
        tab = tab + teb;
        teb = 0;
    }

    printf("TOTAL OF ALL BRANCHES: %d\n", tab);
    printf("BRANCH ID WHERE MAXIMUM REACHED: %d\n", bmax);
    printf("MAX BILL IS: %d, in BRANCH ID: %d of MOBILE ID: %d\n", mmax, bmax, pmax);

    return 0;
}


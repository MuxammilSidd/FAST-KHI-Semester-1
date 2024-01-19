#include <stdio.h>

int main() {
    int n, i, j, x, y, largest;
    printf("Enter n:");
    scanf("%d", &n);
    int matrices[n][n];
    int new[n - 2][n - 2];
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrices[i][j]);
        }
    }
    for (i = 1; i < n - 1; i++) {
        for (j = 1; j < n - 1; j++) {
            largest = 0;
            for (x = i - 1; x <= i + 1; x++) {
                for (y = j - 1; y <= j + 1; y++) {
                    if (matrices[x][y] > largest) {
                        largest = matrices[x][y];
                    }
                }
            }
            new[i - 1][j - 1] = largest;
        }
    }
    for (i = 0; i < n - 2; i++) {
        for (j = 0; j < n - 2; j++) {
            printf("%d ", new[i][j]);
        }
        printf("\n");
    }
    return 0;
}


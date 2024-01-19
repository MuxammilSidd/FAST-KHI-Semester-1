#include <stdio.h>
int main() {
    int n, i, j, temp;
    printf("ENTER N: ");
    scanf("%d", &n);
    int values[n];
    printf("Enter values for N: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &values[i]);
    }
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (values[j] > values[j + 1]) {
                temp = values[j];
                values[j] = values[j + 1];
                values[j + 1] = temp;
            }
        }
    }

    printf("Array arranged in ascending order: ");
    for (i = 0; i < n; i++) {
        printf("%d ", values[i]);
    }
}

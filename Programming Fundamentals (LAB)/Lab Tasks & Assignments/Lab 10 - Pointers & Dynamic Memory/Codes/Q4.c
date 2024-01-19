#include <stdio.h>
#include <stdlib.h>

int *findIntersection(int arr1[], int arr2[], int size1, int size2, int *resultSize);
int isElementInArray(int arr[], int size, int num);

int main() 
{

    int s1, s2, i;
    printf("Enter size of Array 1:\n");
    scanf("%d", &s1);
    int *a1 = (int *)malloc(s1 * sizeof(int));
    printf("\nEnter elements of Array 1:\n");
    for (i = 0; i < s1; i++) {
        scanf("%d", &a1[i]);
    }

    printf("\nEnter size of Array 2:\n");
    scanf("%d", &s2);
    int *a2 = (int *)malloc(s2 * sizeof(int));
    printf("\nEnter elements of Array 2:\n");
    for (i = 0; i < s2; i++) {
        scanf("%d", &a2[i]);
    }

    printf("\nElements of Array 1:\n");
    for (i = 0; i < s1; i++) {
        printf("%d", a1[i]);
        if (i < s1 - 1) {
            printf(", ");
        }
    }
    printf("\n");

    printf("\nElements of Array 2:\n");
    for (i = 0; i < s2; i++) {
        printf("%d", a2[i]);
        if (i < s2 - 1) {
            printf(", ");
        }
    }
    printf("\n");

    int intersectionSize = 0;
    int *intersection = findIntersection(a1, a2, s1, s2, &intersectionSize);

    if (intersection != NULL) {
        printf("Size of array of common elements: %d\n", intersectionSize);
        printf("Common Elements: \n");
        for (i = 0; i < intersectionSize; i++) {
            printf("%d\n", intersection[i]);
        }

        free(intersection);
    } else {
        printf("No common elements.\n");
    }

    free(a1);
    free(a2);

    return 0;
}

int *findIntersection(int arr1[], int arr2[], int size1, int size2, int *resultSize) {
    int *intersection = NULL;
    int count = 0;

    for (int i = 0; i < size1; i++) {
        if (isElementInArray(arr2, size2, arr1[i]) && !isElementInArray(intersection, count, arr1[i])) {
            count++;
            int *temp = (int *)realloc(intersection, count * sizeof(int));
            if (temp != NULL) {
                intersection = temp;
                intersection[count - 1] = arr1[i];
            } else {
                free(intersection);
                return NULL;
            }
        }
    }

    *resultSize = count;
    return intersection;
}

int isElementInArray(int arr[], int size, int num) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == num) {
            return 1; // Element found
        }
    }
    return 0; // Element not found
}
#include <stdio.h>
#include <limits.h>
#include <math.h>

int min(int a,int b) {
    return (a<b) ? a : b;
}

int min3(int a,int b,int c) {
    return min(a, min(b, c));
}

int minSteps(int target,int m,int n,int o) {
    if (target==0){
        return 0;
    }
    if (target<0){
        return INT_MAX;
    }

    int steps_m=minSteps(target-m,m,n,o);
    int steps_n=minSteps(target-n,m,n,o);
    int steps_o=minSteps(target-o,m,n,o);

    int min_steps=min3(steps_m,steps_n,steps_o);
	
    return (min_steps == INT_MAX) ? INT_MAX : min_steps+1;
}

int main() {
    int target,m,n,o;

    printf("Enter target: ");
    scanf("%d", &target);

    printf("Enter steps (m, n, o): ");
    scanf("%d %d %d", &m, &n, &o);

    if (m <= 0 || n <= 0 || o <= 0) {
        printf("Step sizes must be positive integers.\n");
        return 1;
    }

    if (target < 0) {
        printf("Target must be a non-negative integer.\n");
        return 1;
    }

    int result = minSteps(target, m, n, o);

    if (result == INT_MAX) {
        printf("It's not possible to reach the target with the given steps.\n");
    } else {
        printf("Minimum number of steps: %d\n", result);
    }

    return 0;
}

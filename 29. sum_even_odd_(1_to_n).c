#include <stdio.h>

int main() {
    int n, i, even_sum = 0, odd_sum = 0;

    printf("Enter N: ");
    scanf("%d", &n);

    printf("Even numbers: ");
    for(i = 1; i <= n; i++) {
        if(i % 2 == 0) {
            printf("%d ", i);
            even_sum += i;
        }
    }

    printf("\nOdd numbers: ");
    for(i = 1; i <= n; i++) {
        if(i % 2 != 0) {
            printf("%d ", i);
            odd_sum += i;
        }
    }

    printf("\nEven sum = %d\n", even_sum);
    printf("Odd sum = %d\n", odd_sum);

    return 0;
}

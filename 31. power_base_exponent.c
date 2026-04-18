#include <stdio.h>

int main() {
    int base, exp, i;
    long long result = 1;

    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exp);

    if(exp < 0) {
        printf("Negative exponent not supported\n");
        return 0;
    }

    for(i = 1; i <= exp; i++) {
        result *= base;
    }

    printf("%d^%d = %lld\n", base, exp, result);

    return 0;
}

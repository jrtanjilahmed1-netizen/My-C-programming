#include <stdio.h>

int main() {
    int a, b, max, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    max = (a > b) ? a : b;

    for(lcm = max; ; lcm += max) {
        if(lcm % a == 0 && lcm % b == 0) {
            printf("LCM = %d\n", lcm);
            break;
        }
    }

    return 0;
}

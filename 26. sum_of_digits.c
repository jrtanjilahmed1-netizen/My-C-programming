#include <stdio.h>

int main() {
    int num, sum = 0, digit, original;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    original = num;
    
    while(num > 0) {
        digit = num % 10;
        sum += digit;
        num = num / 10;
    }
    
    printf("Sum of digits of %d = %d\n", original, sum);
    
    return 0;
}

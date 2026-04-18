#include <stdio.h>

int main() {
    int num, reversed = 0, digit, original;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    original = num;
    
    while(num > 0) {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num = num / 10;
    }
    
    printf("Reverse of %d is %d\n", original, reversed);
    
    return 0;
}

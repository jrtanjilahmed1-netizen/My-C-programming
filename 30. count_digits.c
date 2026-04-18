#include <stdio.h>
int main() {
    int num, count = 0, temp;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    if(temp == 0) count = 1;
    else {
        while(temp != 0) {
            count++;
            temp /= 10;
        }
    }
    printf("Number of digits = %d\n", count);
    return 0;
}

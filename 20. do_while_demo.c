#include <stdio.h>

int main() {
    int i = 1;
    
    printf("The number (1 to 10):\n");
    do {
        printf("%d ", i);
        i++;
    } while(i <= 10);
    printf("\n");
    
    return 0;
}

#include <stdio.h>

int main() {
    
    int x;
    
    printf("Enter x: ", &x);
    scanf("%d", &x);
    printf("%d^2 = %d", x, x*x);
    
    return 0;

}
#include <stdio.h>

int main() {
    int a = 5, b = 3, sum, diff, product;
    float division;
    
    sum = a + b;
    diff = a - b;
    product = a * b;
    division = (float)a / b;
    
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", diff);
    printf("Product: %d\n", product);
    printf("Division: %.2f\n", division);
    
    return 0;
}

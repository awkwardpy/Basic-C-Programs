#include <stdio.h>

int main() {
    int i;
    
    // for loop
    for (i = 1; i <= 5; i++) {
        printf("%d ", i);
    }
    printf("\n");
    
    // while loop
    i = 1;
    while (i <= 5) {
        printf("%d ", i);
        i++;
    }
    printf("\n");
    
    // do-while loop
    i = 1;
    do {
        printf("%d ", i);
        i++;
    } while (i <= 5);
    
    return 0;
}

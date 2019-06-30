#include <stdio.h>

int main() {
    // increment and decrement

    int x = 2;
    
    x = x + 1;
    printf(" increase: %d\n", x);
    x = x - 1;
    printf(" decrease: %d\n", x);

    x += 1;
    printf(" increase: %d\n", x);
    x = x -= 1;
    printf(" decrease: %d\n", x);

    x++;
    printf(" increase: %d\n", x);
    x--;
    printf(" decrease: %d\n", x);
    
    
    return 0;
}

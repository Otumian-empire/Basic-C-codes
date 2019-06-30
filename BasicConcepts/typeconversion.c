#include <stdio.h>

int main() {
    // code here
    // type conversion - implicit
    // example: 
    int x, y;
    float average_num;

    x = 20;
    y = 21;

    average_num = (x + y) / 2.0;
    printf("average_num: %.2f\n", average_num);
    printf("literal average_num: %.2f\n", (x + y) / 2.0);

    // type casting - explicit - coersion
    /* 
    int - (int)
    float - (float)
    char - (char)
    */

    printf("%f\n\n", (float) (x + y) / 2);

    
    
    return 0;
}

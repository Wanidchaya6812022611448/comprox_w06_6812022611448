#include <stdio.h>

int main() {
    int a = 5, b = 2;
    float x = 3.0, y = 4.5;

    int r1 = a++ * b + ((int)y % 3);
    int r2 = (a > b) && ((int)x / b < 2);
    float r3 = ++x * y - a / 2;
    float r4 = ((x += 1.5) > y) || (b-- > 0);

    printf("r1 = %d\n", r1);   // 5×2=10, 4%3=1 → 10+1=11
    printf("r2 = %d\n", r2);   // 6>2=1, 3/2=1<2=1 → 1&&1=1
    printf("r3 = %.2f\n", r3); // ++x=4.0, 4.0×4.5=18.0, a/2=3.0 → 18-3=15.00
    printf("r4 = %.2f\n", r4); // x=5.5>4.5=1, b=2>0=1 → 1||1=1.00

    return 0;
}
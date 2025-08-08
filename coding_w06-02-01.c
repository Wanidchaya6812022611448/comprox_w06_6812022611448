#include <stdio.h>

int main() {
    int i = 1, j = 2, k;

    k = i + j;              // k = 1 + 2 = 3
    i = i + (k * j);        // i = 1 + (3 * 2) = 7
    j = i / 2;              // j = 7 / 2 = 3 (int หารกันปัดเศษ)
    k = i % 2;              // k = 7 % 2 = 1
    i = (j + k) * 3;        // i = (3 + 1) * 3 = 12

    printf("i = %d, j = %d, k = %d\n", i, j, k);  // ผลลัพธ์สุดท้าย
    return 0;
}

#include <stdio.h>

int main() {
    int a = 5, b = 17;
    float c = 8.5;
    double d = 4.0;

    printf("1. ค่าตัวแปรที่กำหนด: a=%d, b=%d, c=%.1f, d=%.1f\n", a, b, c, d);
    printf("2. b + a = %d\n", b + a);                 // 17 + 5 = 22
    printf("3. a * b = %d\n", a * b);                 // 5 * 17 = 85
    printf("4. c * d = %.2f\n", c * d);               // 8.5 * 4.0 = 34.00
    printf("5. a * c = %.2f\n", a * c);               // 5 * 8.5 = 42.50
    printf("6. c / d = %.2f\n", c / d);               // 8.5 / 4.0 = 2.13
    printf("7. b / c = %.2f\n", b / c);               // 17 / 8.5 = 2.00
    printf("8. a %% b = %d\n", a % b);                // 5 % 17 = 5
    printf("9. (int)c %% a = %d\n", (int)c % a);      // (int)8.5 = 8 → 8 % 5 = 3
    printf("10. (int)c %% (int)d = %d\n", (int)c % (int)d); // 8 % 4 = 0

    return 0;
}
//บรรทัดที่ 9 และ 10 จะ Error เพราะ % ใช้กับ int เท่านั้น หากต้องการไม่ให้ Error ต้องแปลงเป็น int ก่อน เช่น (int)c % a

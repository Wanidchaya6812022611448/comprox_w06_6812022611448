#include <stdio.h>

int main() {
    
    float x, total, price, quantity, discount, rate, score;
    int xi, y, z, a, penalty, mistake;

    // 1. ลบค่า 4.0 ออกจาก x โดยใช้คำสั่งแบบย่อ
    x -= 4.0;  // เทียบเท่ากับ x = x - 4.0

    // 2. คูณ x ด้วย 6.5 แล้วเก็บผลลัพธ์กลับลงใน x
    x *= 6.5;  // เทียบเท่ากับ x = x * 6.5

    // 3. เอา xi mod ด้วย (y + z * a) โดยใช้คำสั่งแบบย่อ
    xi %= (y + z * a);  // เทียบเท่ากับ xi = xi % (y + z * a)

    // 4. หาร x ด้วย (2.0 * x) โดยใช้คำสั่งแบบย่อ
    x /= (2.0 * x);  // เทียบเท่ากับ x = x / (2.0 * x)

    // 5. เพิ่มค่าผลรวมของ (price * quantity - discount) เข้า total
    total += (price * quantity - discount);  // เทียบเท่ากับ total = total + (...)

    // 6. คูณ x ด้วย (1 + rate/100) โดยใช้คำสั่งแบบย่อ
    x *= (1 + rate / 100);  // เทียบเท่ากับ x = x * (1 + rate / 100)

    // 7. หักค่าปรับจาก score โดยใช้คำสั่งแบบย่อ
    score -= (penalty * (mistake + 1));  // เทียบเท่ากับ score = score - (...)

    return 0;
}

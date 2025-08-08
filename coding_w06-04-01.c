#include <stdio.h>

int main() {

    float x, total, price, quantity, discount, rate, score;
    int xi, y, z, a, penalty, mistake;

    // 1. ลบค่า 4.0 ออกจากตัวแปร x
    x = x - 4.0;

    // 2. คูณ x ด้วย 6.5 แล้วเก็บกลับลงใน x
    x = 6.5 * x;

    // 3. คำนวณเศษของ xi เมื่อหารด้วย (y + z * a) แล้วเก็บผลลัพธ์ลงใน xi
    //    ใช้ตัวแปร xi แทน x เพราะ % ใช้ได้เฉพาะกับ int
    xi = xi % (y + z * a);

    // 4. แบ่งค่า x ด้วย (2.0 * x) แล้วเก็บผลลัพธ์กลับลงใน x
    x = x / (2.0 * x);

    // 5. คำนวณราคาสุทธิ (price * quantity - discount) แล้วบวกเพิ่มเข้า total
    total = total + (price * quantity - discount);

    // 6. คำนวณดอกเบี้ย x = x * (1 + อัตราดอกเบี้ยร้อยละ)
    x = x * (1 + rate / 100);

    // 7. หักคะแนน score ด้วยค่าปรับ penalty คูณจำนวนความผิดพลาด (mistake + 1)
    score = score - (penalty * (mistake + 1));

    return 0;
}

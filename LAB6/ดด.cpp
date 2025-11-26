#include <iostream>
using namespace std;

int main() {
    int num;
    int maxVal = -1;
    int minVal = 21;  // ช่วง 10–20
    int count = 0;

    for (int i = 0; i < 10; ) {
        cin >> num;
        if (num == 0) break;
        if (num < 10 || num > 20) continue;

        if (num > maxVal) maxVal = num;
        if (num < minVal) minVal = num;

        count++;
        i++; // นับรอบเฉพาะตอนค่าถูกช่วง
    }

    if (count == 0) {
        cout << 0;
    } else {
        cout << (maxVal - minVal);
    }

    return 0;
}

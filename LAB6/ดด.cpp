#include <iostream>
using namespace std;

int main() {
    int n, i, maxVal, minVal, x;
    i = 0;
    maxVal = -99999;
    minVal = 99999;

    while (i < 10) { 
        cin >> x;
        if (x == 0) {  
            break;      
        }
        while (x < 10 || x > 20) { 
            cin >> x;
            if (x == 0) {
                break;
            }
        }
        if (x == 0) {
            break;
        }
        if (x > maxVal) maxVal = x;
        if (x < minVal) minVal = x;
        i++;
    }

    if (i == 0) {
        cout << 0;
    } else {
        cout << (maxVal - minVal);
    }

    return 0;
}



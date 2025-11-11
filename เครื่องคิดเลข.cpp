#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int num1, num2;
    char mark;
    cin >> num1 >> num2 >> mark;
    switch(mark) {
        case '+':
            cout << fixed << setprecision(6) << (double)num1 + num2;
            break;
        case '-':
            cout << fixed << setprecision(6) << (double)num1 - num2;
            break;
        case '*':
            cout << fixed << setprecision(6) << (double)num1 * num2;
            break;
        case '/':
            cout << fixed << setprecision(6) << (double)num1 / num2;
            break;
        case '>':
            return 0;
        default:
            cout << "Invalid mark!!";
    }
    return 0;
}


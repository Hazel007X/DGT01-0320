#include <iostream>
using namespace std;

int main() {
    int n, i, x;
    do {
        cin >> n;
    } while (n < 0 || n > 10);
    x = 1;
    i = 1;
    while (i <= n) {
        x = x * i;
        i++;
    }
    cout << x;
    return 0;
}

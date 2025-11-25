#include <iostream>
using namespace std;

int main() {
    char ch, mychar;
    int count = 0;

    cin >> ch;

    do {
        cin >> mychar;
        if (mychar != ch) {
            count++;
        }
    } while (mychar != ch);

    cout << count;

    return 0;
}


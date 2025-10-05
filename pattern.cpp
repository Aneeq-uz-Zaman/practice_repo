#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int repeatLines = (n / 5);
    if (repeatLines < 1) repeatLines = 1;

    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n; j++) cout << "-";

        for (int j = 1; j <= i; j++) cout << "*";

        if (i > 2) {
            for (int j = 1; j <= repeatLines; j++) cout << "-";
            for (int j = 1; j < i; j++) cout << "*";
        }

        cout << endl;
    }

    for (int i = 0; i < repeatLines; i++) {
        for (int j = 1; j <= n - 1; j++) cout << "-";
        cout << "*";
        for (int j = 1; j <= repeatLines; j++) cout << "-";
        cout << "*";
        cout << endl;
    }

    for (int i = 0; i < (n - repeatLines) / 2; i++) {
        for (int j = 0; j < i; j++) cout << "-";
        for (int j = 0; j < (2*n) - (i*2); j++) cout << "*";
        cout << endl;
    }

    return 0;
}
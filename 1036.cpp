#include <iostream>
using namespace std;

void out_low(int n, char c) {
    for (int i = 0; i < n; i++)
        cout << c;
    cout << endl;
}

void out_col(int n, char c) {
    cout << c;
    for (int i = 0; i < n - 2; i++)
        cout << " ";
    cout << c;
    cout << endl;
}

int main() {
    int n = 0;
    char c;
    cin >> n >> c;
    out_low(n, c);
    float col = n / 2.0 + 0.5;
    for (int i = 0; i < (int(col) - 2); i++) {
        out_col(n, c);
    }
    out_low(n, c);

    return 0;
}

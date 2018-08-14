#include <iostream>
using namespace std;

int main() {
    int num[101];
    int n = 0, m = 0;
    cin >> n >> m;
    if (m > n) m %= n;
    for (int i = 0; i < n; i++)
        cin >> num[i];
    int cnt = 0;
    for (int i = n - m; i < n; i++) {
        if (cnt != n - 1)
            cout << num[i] << ' ';
        else
            cout << num[i];
        cnt++;
    }
    for (int i = 0; i < n - m; i++) {
        if (cnt != n - 1)
            cout << num[i] << ' ';
        else
            cout << num[i];
        cnt++;
    }

    return 0;
}

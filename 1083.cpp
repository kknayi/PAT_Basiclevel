#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n = 0;
    int cnt[10005] = { 0 };
    cin >> n;
    for (int i = 0; i < n; i++) {
        int tmp = 0;
        cin >> tmp;
        cnt[abs(tmp - i - 1)]++;
    }
    for (int i = n; i >= 0; i--) {
        if (cnt[i] > 1)
            cout << i << ' ' << cnt[i] << endl;
    }

    return 0;
}

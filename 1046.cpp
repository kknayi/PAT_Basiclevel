#include <iostream>
using namespace std;

int main() {
    int cnt1 = 0, cnt2 = 0;
    int a1 = 0, a2 = 0, b1 = 0, b2 = 0;
    int n = 0;
    cin >> n;
    while (n--) {
        cin >> a1 >> a2 >> b1 >> b2;
        if (a2 == a1 + b1 && b2 != a1 + b1)
            cnt2++;
        else if (b2 == a1 + b1 && a2 != a1 + b1)
            cnt1++;
    }
    cout << cnt1 << ' ' << cnt2 << endl;

    return 0;
}

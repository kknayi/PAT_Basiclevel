#include <iostream>
using namespace std;

int main() {
    int n = 0, cnt = 0;
    cin >> n;
    while (n != 1) {
        if (!(n % 2))
            n = n / 2;
        else
            n = (3 * n + 1) / 2;
        cnt++;
    }
    cout << cnt << endl;

    return 0;
}

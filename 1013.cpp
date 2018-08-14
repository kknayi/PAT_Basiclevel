#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

bool prime(int x) {
    for (int i = 2; i <= sqrt(x); i++) {
        if (x % i == 0)
            return false;
    }
    return true;
}

int main() {
    vector<int> num;
    for (int i = 2; i < 150000; i++) {
        if (prime(i))
            num.push_back(i);
    }
    int m = 0, n = 0;
    cin >> m >> n;
    int cnt = 0;
    for (int i = m - 1; i < n; i++) {
        cout << num[i];
        cnt++;
        if (cnt != 10 && i != n - 1)
            cout << ' ';
        else {
            cnt = 0;
            cout << endl;
        }
    }

    return 0;
}

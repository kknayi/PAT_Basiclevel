#include <iostream>
#include <vector>
#include <cmath>
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
    int n = 0;
    cin >> n;
    for (int i = 2; i <= n; i++) {
        if (prime(i))
            num.push_back(i);
    }
    int cnt = 0;
    for (int i = 0; i < num.size(); i++) {
        for (int j = i + 1; j < num.size(); j++) {
            if (num[j] - num[i] == 2)
                cnt++;
        }
    }
    cout << cnt << endl;

    return 0;
}

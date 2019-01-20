#include <iostream>
#include <cmath>
using namespace std;

bool prime(int n) {
    if (n == 2)
        return true;
    else{
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0)
                return false;
        }
    }
    return true;
}

int main() {
    int n = 0, k  = 0, tmp = 0;
    int stu[10005] = { 0 };
    bool flag[10005] = { 0 };
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> tmp;
        stu[tmp] = i;
    }
    cin >> k;
    for (int i = 0; i < k; i++) {
        cin >> tmp;
        if (stu[tmp] == 0)
            printf("%04d: Are you kidding?\n", tmp);
        else if (stu[tmp] == 1 && !flag[tmp]) {
            printf("%04d: Mystery Award\n", tmp);
            flag[tmp] = true;
        }
        else if (prime(stu[tmp]) && !flag[tmp]) {
            printf("%04d: Minion\n", tmp);
            flag[tmp] = true;
        }
        else if (!prime(stu[tmp]) && !flag[tmp]) {
            printf("%04d: Chocolate\n", tmp);
            flag[tmp] = true;
        }
        else
            printf("%04d: Checked\n", tmp);
    }

    return 0;
}

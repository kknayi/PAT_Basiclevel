#include <iostream>
using namespace std;

int main() {
    int n = 0;
    char c;
    cin >> n >> c;
    if (n <= 0) {
        return 0;
    }
    n--;
    int low_cnt = 3;
    while (n > 2 * low_cnt) {
        if (low_cnt != 1)
            n -= 2 * low_cnt;
        else
            n -= low_cnt;
        low_cnt += 2;
    }
    low_cnt -= 2;
    int space_cnt = 0;
    while (low_cnt > 0) {
        for (int i = 0; i < space_cnt; i++)
            cout << " ";
        for (int j = 0; j < low_cnt; j++)
            cout << c;
        space_cnt++;
        low_cnt -= 2;
        cout << endl;
    }
    space_cnt -= 2;
    low_cnt += 4;
    while (space_cnt >= 0) {
        for (int i = 0; i < space_cnt; i++)
            cout << " ";
        for (int j = 0; j < low_cnt; j++)
            cout << c;
        space_cnt--;
        low_cnt += 2;
        cout << endl;
    }
    cout << n << endl;

    return 0;
}

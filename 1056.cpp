#include <iostream>
using namespace std;

int main() {
    int n = 0, sum = 0;
    int num[15];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> num[i];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j == i)
                j++;
            if (j >= n)
                break;
            sum += num[i] * 10 + num[j];
        }
    }
    cout << sum << endl;

    return 0;
}

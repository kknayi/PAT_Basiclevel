#include <iostream>
#include <string>
using namespace std;

int main() {
    string num;
    int n = 0, sum = 0;
    cin >> num >> n;
    for (int i = 0; i < num.size(); i++) {
        if (sum == 0 && int(num[i]) - 48 < n && i != num.size() - 1) {
            if (i != 0)
                cout << '0';
            sum += (int(num[i]) - 48) * 10;
            i++;
            sum += int(num[i]) - 48;
        }
        else {
            sum *= 10;
            sum += int(num[i]) - 48;
        }
        cout << sum / n;
        sum %= n;
    }
    cout << ' ' << sum << endl;

    return 0;
}

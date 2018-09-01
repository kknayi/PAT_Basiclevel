#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    string zero;
    for (int i = 0; i < 100; i++)
        zero += '0';
    string result;
    cin >> a >> b;
    int len_a = a.size();
    int len_b = b.size();
    if (len_a > len_b) {
        string tmp = b;
        string tmp1;
        int len = len_a - len_b;
        tmp1 = zero.substr(0, len);
        b = tmp1 + tmp;
    }
    else if (len_a < len_b) {
        string tmp = a;
        string tmp1;
        int len = len_b - len_a;
        tmp1 = zero.substr(0, len);
        a = tmp1 + tmp;
    }
    bool flag = true;
    for (int i = a.size() - 1; i >= 0; i--) {
        if (flag) {
            int tmp = ((int(b[i]) - 48) + (int(a[i]) - 48)) % 13;
            if (tmp == 10)
                result.push_back('J');
            else if (tmp == 11)
                result.push_back('Q');
            else if (tmp == 12)
                result.push_back('K');
            else
                result.push_back(char(tmp + 48));
            flag = false;
        }
        else {
            int tmp = ((int(b[i]) - 48) - (int(a[i]) - 48));
            if (tmp < 0)
                tmp += 10;
            result.push_back(char(tmp + 48));
            flag = true;
        }
    }
    for (int i = result.size() - 1; i >= 0; i--)
        cout << result[i];
    cout << endl;

    return 0;
}

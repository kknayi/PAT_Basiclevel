#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    string str, xiaoshu, zhishu;
    char c1, c2, zhenshu;
    int len = 0, sum = 0, loc_E = 0;
    cin >> str;
    c1 = str[0];
    zhenshu = str[1];
    for (int i = 3; i < str.size(); i++) {
        if (str[i] == 'E') {
            loc_E = i;
            break;
        }
        xiaoshu += str[i];
    }
    c2 = str[loc_E + 1];
    for (int i = loc_E + 2; i < str.size(); i++)
        zhishu += str[i];
    if (c1 == '-')
        cout << '-';
    len = zhishu.size();
    len--;
    for (int i = 0; i < zhishu.size(); i++) {
        sum += (zhishu[i] - '0') * pow(10, len);
        len--;
    }
    if (c2 == '+') {
        int loc = xiaoshu.size() - 1;
        while (xiaoshu[loc] == '0' && loc >= 0)
            loc--;
        cout << zhenshu;
        if (sum < xiaoshu.size()) {
            for (int i = 0; i < xiaoshu.size(); i++) {
                if (i == sum)
                    cout << '.';
                cout << xiaoshu[i];
            }
        }
        else {
            for (int i = 0; i <= loc; i++) {
                cout << xiaoshu[i];
            }
            sum = sum - loc - 1;
            for (int i = 0; i < sum; i++)
                cout << '0';
        }
    }
    else {
        cout << "0.";
        for (int i = 1; i < sum; i++)
            cout << '0';
        cout << zhenshu << xiaoshu;
    }
    cout << endl;

    return 0;
}

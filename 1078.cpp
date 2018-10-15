#include <iostream>
#include <string>
using namespace std;

void fun_C () {
    string str;
    getline(cin, str);
    for (int i = 0; i < str.size(); i++) {
        int cnt = 1;
        while (str[i] == str[i + 1]) {
            cnt++;
            i++;
        }
        if (cnt != 1)
            cout << cnt;
        cout << str[i];
    }
    cout << endl;
}

void fun_D () {
    string str;
    getline(cin, str);
    for (int i = 0; i < str.size(); i++) {
        int cnt = 0;
        while (str[i] >= '0' && str[i] <= '9') {
            cnt = cnt * 10 + int(str[i]) - 48;
            i++;
        }
        for (int j = 0; j < cnt; j++)
            cout << str[i];
        if (cnt == 0)
            cout << str[i];
    }
    cout << endl;
}

int main() {
    char c = 0;
    cin >> c;
    cin.ignore();
    if (c == 'C')
        fun_C();
    else
        fun_D();

    return 0;
}

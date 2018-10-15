#include <iostream>
#include <string>
#include <cmath>
using namespace std;

const string gewei[] = { "tret", "jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec" };
const string shiwei[] = { "###", "tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou" };

void ten2tir(string str) {
    int num = 0, D_val = 1;
    for (int i = 0; i < str.size(); i++) {
        num += (str[i] - 48) * pow(10, (str.size() - D_val));
        D_val++;
    }
    if (num < 13)
        cout << gewei[num] << endl;
    else {
        if (num % 13 == 0)
            cout << shiwei[num / 13] << endl;
        else
            cout << shiwei[num / 13] << ' ' << gewei[num % 13] << endl;
    }
}

void tir2ten(string str) {
    int loc_space = 0;
    int sum = 0;
    for (int i = 0; i < str.size(); i++)
        if (str[i] == ' ')
            loc_space = i;
    if (loc_space) {
        string tmp;
        tmp = str.substr(0, loc_space);
        for (int i = 1; i < 13; i++)
            if (tmp == shiwei[i])
                sum += i * 13;
        tmp = str.substr(loc_space + 1, str.size() - loc_space - 1);
        for (int i = 0; i <= 13; i++)
            if (tmp == gewei[i])
                sum += i;
    }
    else {
        for (int i = 1; i < 13; i++)
            if (str == shiwei[i])
                sum += i * 13;
        for (int i = 0; i <= 13; i++)
            if (str == gewei[i])
                sum += i;
    }
    cout << sum << endl;
}

int main() {
    int n = 0;
    string str;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++) {
        getline(cin, str);
        if (isdigit(str[0]))
            ten2tir(str);
        else
            tir2ten(str);
    }

    return 0;
}

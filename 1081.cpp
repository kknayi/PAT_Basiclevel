#include <iostream>
#include <string>
using namespace std;

void fun(string s) {
    bool number = false, word = false;
    if (s.size() < 6) {
        cout << "Your password is tai duan le." << endl;
        return;
    }
    for (int i = 0; i < s.size(); i++) {
        if (isdigit(s[i]))
            number = true;
        else if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z')
            word = true;
        else if (s[i] != '.') {
            cout << "Your password is tai luan le." << endl;
            return;
        }
    }
    if (number && word)
        cout << "Your password is wan mei." << endl;
    else if (!number && word)
        cout << "Your password needs shu zi." << endl;
    else if (!word && number)
        cout << "Your password needs zi mu." << endl;
}

int main() {
    int n = 0;
    string s;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++) {
        getline(cin, s);
        fun(s);
    }

    return 0;
}

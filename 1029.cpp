#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string str1, str2;
    vector<char> out;
    cin >> str1 >> str2;
    for (int i = 0; i < str1.size(); i++) {
        if (str1[i] >= 'a' && str1[i] <= 'z') {
            str1[i] -= 32;
        }
        bool flag = false;
        for (int j = 0; j < out.size(); j++) {
            if (str1[i] == out[j]) {
                flag = true;
                break;
            }
        }
        if (!flag)
            out.push_back(str1[i]);
    }
    for (int i = 0; i < str2.size(); i++) {
        if (str2[i] >= 'a' && str2[i] <= 'z')
            str2[i] -= 32;
    }
    for (int i = 0; i < str2.size(); i++) {
        for (int j = 0; j < out.size(); j++) {
            if (str2[i] == out[j]) {
                out.erase(out.begin() + j);
                j--;
            }
        }
    }
    for (int i = 0; i < out.size(); i++)
        cout << out[i];
    cout << endl;

    return 0;
}

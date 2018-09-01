#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string str1, str2;
    vector<char> cnt1;
    vector<char> cnt2;
    cin >> str1 >> str2;
    for (int i = 0; i < str1.size(); i++)
        cnt1.push_back(str1[i]);
    for (int i = 0; i < str2.size(); i++)
        cnt2.push_back(str2[i]);
    for (int i = 0; i < cnt2.size(); i++) {
        for (int j = 0; j < cnt1.size(); j++) {
            if (cnt2[i] == cnt1[j]) {
                cnt1.erase(cnt1.begin() + j);
                cnt2.erase(cnt2.begin() + i);
                i--;
                break;
            }
        }
    }
    if (cnt2.size() == 0)
        cout << "Yes " << cnt1.size() << endl;
    else
        cout << "No " << cnt2.size() << endl;

    return 0;
}

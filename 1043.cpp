#include <iostream>
#include <string>
using namespace std;

int main() {
    int cnt[6] = { 0 };
    char c[] = { 'P', 'A' ,'T', 'e', 's', 't' };
    string str;
    getline(cin, str);
    for (int i = 0; i < str.size(); i++) {
        for (int j = 0; j < 6; j++) {
            if (str[i] == c[j]) {
                cnt[j]++;
                break;
            }
        }
    }
    int loc = 0;
    while (cnt[0] != 0 || cnt[1] != 0 || cnt[2] != 0 || cnt[3] != 0 || cnt[4] != 0 || cnt[5] != 0) {
        if (cnt[loc] != 0) {
            cout << c[loc];
            cnt[loc]--;
        }
        loc++;
        if (loc == 6)
            loc = 0;
    }
    cout << endl;

    return 0;
}

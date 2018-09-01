#include <iostream>
#include <string>
using namespace std;

int main() {
    int cnt[26] = { 0 };
    string str;
    getline(cin, str);
    int loc0 = int('a');
    int cha = int('a' - 'A');
    for (int i = 0; i < str.size(); i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            cnt[int(str[i]) - loc0]++;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z') {
            cnt[int(str[i]) + cha - loc0]++;
        }
    }
    int maxx = 0, max_loc = 0;
    for (int i = 0; i < 26; i++) {
        if (cnt[i] > maxx) {
            maxx = cnt[i];
            max_loc = i;
        }
    }
    cout << char(max_loc + loc0) << " " << cnt[max_loc] << endl;

    return 0;
}

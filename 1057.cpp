#include <iostream>
#include <string>
using namespace std;

int main() {
    int sum = 0;
    string str;
    getline(cin, str);
    for (int i = 0; i < str.size(); i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            sum += str[i] - 'a' + 1;
        else if (str[i] >= 'A' && str[i] <= 'Z')
            sum += str[i] - 'A' + 1;
    }
    if (sum == 0) {
        cout << "0 0" << endl;
        return 0;
    }
    int chu = sum, yu = 0;
    int cnt_1 = 0, cnt_0 = 0;
    while (chu >= 2) {
        yu = chu % 2;
        if (yu == 1)
            cnt_1++;
        else
            cnt_0++;
        chu /= 2;
    }
    if (chu == 1)
        cnt_1++;
    else
        cnt_0++;
    cout << cnt_0 << ' ' << cnt_1 << endl;

    return 0;
}

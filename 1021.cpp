#include <iostream>
#include <string>
using namespace std;

int main() {
    string num;
    int cnt[10] = { 0 };
    getline(cin, num);
    for (int i = 0; i < num.size(); i++) {
        switch(num[i]) {
        case '0':
            cnt[0]++;
            break;
        case '1':
            cnt[1]++;
            break;
        case '2':
            cnt[2]++;
            break;
        case '3':
            cnt[3]++;
            break;
        case '4':
            cnt[4]++;
            break;
        case '5':
            cnt[5]++;
            break;
        case '6':
            cnt[6]++;
            break;
        case '7':
            cnt[7]++;
            break;
        case '8':
            cnt[8]++;
            break;
        case '9':
            cnt[9]++;
            break;
        }
    }
    for (int i = 0; i < 10; i++) {
        if (cnt[i] != 0)
            cout << i << ':' << cnt[i] << endl;
    }

    return 0;
}

#include <iostream>
#include <string>
using namespace std;

struct stu {
    string num;
    int shiji;
    int kaoshi;
};

stu s[1005];

void sort(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++)
            if (s[i].shiji > s[j].shiji) {
                stu tmp;
                tmp = s[i];
                s[i] = s[j];
                s[j] = tmp;
            }
    }
}

int main() {
    int cnt = 0;
    int n = 0;
    cin >> n;
    while (n--) {
        string tmp;
        int tmp1 = 0, tmp2 = 0;
        cin >> tmp >> tmp1 >> tmp2;
        s[cnt].num = tmp;
        s[cnt].shiji = tmp1;
        s[cnt].kaoshi = tmp2;
        cnt++;
    }
    sort(cnt);
    int m = 0;
    cin >> m;
    while (m--) {
        int tmp = 0;
        cin >> tmp;
        cout << s[tmp - 1].num << " " << s[tmp - 1].kaoshi << endl;
    }

    return 0;
}

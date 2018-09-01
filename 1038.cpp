#include <iostream>
#include <vector>
using namespace std;

int main() {
    int cnt[105] = { 0 };
    int n = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int tmp = 0;
        cin >> tmp;
        cnt[tmp]++;
    }
    int k = 0;
    cin >> k;
    vector<int> stu;
    for (int i = 0; i < k; i++) {
        int tmp = 0;
        cin >> tmp;
        stu.push_back(tmp);
    }
    for (int i = 0; i < stu.size(); i++) {
        if (i == stu.size() - 1)
            cout << cnt[stu[i]] << endl;
        else
            cout << cnt[stu[i]] << ' ';
    }

    return 0;
}

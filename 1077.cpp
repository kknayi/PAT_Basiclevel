#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n = 0, m = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        vector<int> tmp_vec;
        float out = 0;
        float stu = 0;
        int tmp;
        cin >> tmp;
        out += tmp;
        while (cin.get() != '\n') {
            cin >> tmp;
            if (tmp >= 0 && tmp <= m)
                tmp_vec.push_back(tmp);
        }
        sort(tmp_vec.begin(), tmp_vec.end());
        tmp_vec.erase(tmp_vec.begin());
        tmp_vec.erase(tmp_vec.begin() + tmp_vec.size() - 1);
        for (int j = 0; j < tmp_vec.size(); j++)
            stu += tmp_vec[j];
        stu = stu / tmp_vec.size();
        out += stu;
        out = out / 2 + 0.5;
        cout << int(out) << endl;
        tmp_vec.clear();
    }

    return 0;
}

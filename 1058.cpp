#include <iostream>
#include <string>
using namespace std;

struct ques {
    int score;
    string ac_ans;
    int wa_cnt;
};

int main() {
    ques Que[105];
    int n = 0, m = 0;
    int tmp1, tmp2, tmp3;
    char C;
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        cin >> tmp1 >> tmp2 >> tmp3;
        Que[i].score = tmp1;
        for (int j = 0; j < tmp3; j++) {
            cin >> C;
            Que[i].ac_ans += C;
        }
        Que[i].wa_cnt = 0;
    }
    int stu[1005] = { 0 };
    string tmp_str;
    string t_str;
    for (int i = 0; i < n; i++) {
        cin.ignore();
        getline(cin, t_str);
        int loc = 0;
        for (int j = 0; j < t_str.size(); j++) {
            if (isdigit(t_str[j])) {
                int cnt = int(t_str[j]) - 48;
                while (cnt--) {
                    j += 2;
                    tmp_str += t_str[j];
                }
                if (tmp_str == Que[loc].ac_ans)
                    stu[i] += Que[loc].score;
                else
                    Que[loc].wa_cnt++;
                loc++;
                tmp_str.clear();
            }
        }
    }
    for (int i = 0; i < n; i++)
        cout << stu[i] << endl;
    int maxx = 0;
    for (int i = 0; i < m; i++)
        if (Que[i].wa_cnt > maxx)
            maxx = Que[i].wa_cnt;
    if (maxx == 0)
        cout << "Too simple" << endl;
    else {
        cout << maxx;
        for (int i = 0; i < m; i++)
            if (Que[i].wa_cnt == maxx)
            cout << ' ' << i + 1;
        cout << endl;
    }

    return 0;
}

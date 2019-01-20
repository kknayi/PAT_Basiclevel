#include <iostream>
using namespace std;

struct prob {
    int score;
    bool ac_ans;
};

int main() {
    prob P[105];
    int n = 0, m = 0, tmp = 0;
    int stu_score = 0;
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        cin >> tmp;
        P[i].score = tmp;
    }
    for (int i = 0; i < m; i++) {
        cin >> tmp;
        P[i].ac_ans = tmp;
    }
    for (int i = 0; i < n; i++) {
        stu_score = 0;
        for (int j = 0; j < m; j++) {
            cin >> tmp;
            if (tmp == P[j].ac_ans)
                stu_score += P[j].score;
        }
        cout << stu_score << endl;
    }

    return 0;
}

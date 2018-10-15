#include <iostream>
#include <cmath>
using namespace std;

struct player {
    string num;
    double len;
};

int main() {
    int n = 0;
    cin >> n;
    player P[10005];
    for (int i = 0; i < n; i++) {
        string str;
        int tmp1 = 0, tmp2 = 0;
        cin >> str >> tmp1 >> tmp2;
        P[i].num = str;
        P[i].len = sqrt(pow(tmp1, 2) + pow(tmp2, 2));
    }
    string num_maxx, num_minn;
    double maxx = 0, minn = pow(2, 31);
    for (int i = 0; i < n; i++) {
        if (P[i].len > maxx) {
            maxx = P[i].len;
            num_maxx = P[i].num;
        }
        if (P[i].len < minn) {
            minn = P[i].len;
            num_minn = P[i].num;
        }
    }
    //因为距靶心距离最短的是冠军，而最远的是菜鸟，因此需要把最后结果的输出换一下
    cout << num_minn << ' ' << num_maxx << endl;

    return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Stu {
    int num;
    int s1;
    int s2;
};

bool comp(Stu x, Stu y) {
    if (x.s1 + x.s2 > y.s1 + y.s2) return true;
    else if (x.s1 + x.s2 == y.s1 + y.s2 && x.s1 > y.s1) return true;
    else if (x.s1 + x.s2 == y.s1 + y.s2 && x.s1 == y.s1 && x.num < y.num) return true;
    else return false;
}

int main() {
    vector<Stu> stu[4];
    int tmp_num, tmp_s1, tmp_s2;
    Stu tmp_stu;
    int N = 0, L = 0, H = 0;
    scanf("%d %d %d", &N, &L, &H);
    while (N--) {
        scanf("%d %d %d", &tmp_num, &tmp_s1, &tmp_s2);
        tmp_stu.num = tmp_num;
        tmp_stu.s1 = tmp_s1;
        tmp_stu.s2 = tmp_s2;
        if (tmp_stu.s1 >= L && tmp_stu.s2 >= L) {
            if (tmp_stu.s1 >= H && tmp_stu.s2 >= H) stu[0].push_back(tmp_stu);
            else if (tmp_stu.s1 >= H && tmp_stu.s2 < H) stu[1].push_back(tmp_stu);
            else if (tmp_stu.s1 < H && tmp_stu.s2 < H && tmp_stu.s1 >= tmp_stu.s2) stu[2].push_back(tmp_stu);
            else stu[3].push_back(tmp_stu);
        }
    }
    printf("%d\n", stu[0].size() + stu[1].size() + stu[2].size() + stu[3].size());
    for (int i = 0; i < 4; i++) {
        sort(stu[i].begin(), stu[i].end(), comp);
        for (int j = 0; j < stu[i].size(); j++)
           printf("%d %d %d\n", stu[i][j].num, stu[i][j].s1, stu[i][j].s2);
    }

    return 0;
}

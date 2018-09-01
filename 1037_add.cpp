#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int g1 = 0, s1 = 0, k1 = 0;
    int g2 = 0, s2 = 0, k2 = 0;
    scanf("%d.%d.%d %d.%d.%d", &g1, &s1, &k1, &g2, &s2, &k2);
    long cnt1 = 0, cnt2 = 0;
    cnt1 = (g1 * 17 + s1) * 29 + k1;
    cnt2 = (g2 * 17 + s2) * 29 + k2;
    long tmp = cnt2 - cnt1;
    if (tmp < 0) {
        printf("-");
        tmp = -tmp;
    }
    int g = 0, s = 0, k = 0;
    g = tmp / 17 / 29;
    s = (tmp - g * 17 * 29) / 29;
    k = tmp - g * 17 * 29 - s * 29;
    printf("%d.%d.%d\n", g, s, k);

    return 0;
}

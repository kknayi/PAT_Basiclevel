#include <iostream>
using namespace std;

int main() {
    int m = 0, n = 0, a = 0, b = 0, t = 0, tmp = 0;
    scanf("%d %d %d %d %d", &m, &n, &a, &b, &t);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &tmp);
            if (tmp >= a && tmp <= b)
                printf("%03d", t);
            else
                printf("%03d", tmp);
            if (j != n - 1)
                printf(" ");
            else
                printf("\n");
        }
    }

    return 0;
}

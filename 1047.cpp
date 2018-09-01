#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int n = 0;
    int team[1005] = { 0 };
    cin >> n;
    while (n--) {
        int x = 0, y = 0, score = 0;
        scanf("%d-%d %d", &x, &y, &score);
        team[x] += score;
    }
    int maxx = 0, max_loc = 0;
    for (int i = 0; i < 1005; i++) {
        if (team[i] > maxx) {
            maxx = team[i];
            max_loc = i;
        }
    }
    cout << max_loc << ' ' << maxx << endl;

    return 0;
}

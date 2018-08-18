#include <iostream>
#include <vector>
using namespace std;

int main() {
    int score[100000] = { 0 };
    int n = 0;
    cin >> n;
    while (n--) {
        int school = 0, sc = 0;
        cin >> school >> sc;
        score[school] += sc;
    }
    int maxx = 0, max_loc = 0;
    for (int i = 0; i < 100000; i++) {
        if (score[i] > maxx) {
            maxx = score[i];
            max_loc = i;
        }
    }
    cout << max_loc << " " << maxx << endl;

    return 0;
}

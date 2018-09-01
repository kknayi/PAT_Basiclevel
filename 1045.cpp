#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    vector<int> num;
    vector<int> sortnum;
    vector<int> result;
    int n = 0;
    cin >> n;
    while (n--) {
        int tmp = 0;
        cin >> tmp;
        num.push_back(tmp);
        sortnum.push_back(tmp);
    }
    sort(sortnum.begin(), sortnum.end());
    int maxx = 0;
    for (int i = 0; i < num.size(); i++) {
        if (num[i] > maxx)
            maxx = num[i];
        if (num[i] == sortnum[i] && num[i] >= maxx)
            result.push_back(sortnum[i]);
    }
    cout << result.size() << endl;
    for (int i = 0; i < result.size(); i++) {
        if (i != result.size() - 1)
            cout << result[i] << ' ';
        else
            cout << result[i];
    }
    cout << endl;

    return 0;
}

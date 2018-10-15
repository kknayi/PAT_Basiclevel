#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec, tmp;
    int d = 0, n = 0;
    int cnt = 1;
    cin >> d >> n;
    vec.push_back(d);
    for (int A = 1; A < n; A++) {
        for (int i = 0; i < vec.size(); i++) {
            while (vec[i] == vec[i + 1] && i < vec.size() - 1) {
                cnt++;
                i++;
            }
            tmp.push_back(vec[i]);
            tmp.push_back(cnt);
            cnt = 1;
        }
        vec = tmp;
        tmp.clear();
    }
    for (int i = 0; i < vec.size(); i++)
        cout << vec[i];
    cout << endl;

    return 0;
}

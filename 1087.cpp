#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s;
    int n = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int tmp = 0;
        tmp = i / 2 + i / 3 + i / 5;
        s.insert(tmp);
    }
    cout << s.size() << endl;

    return 0;
}

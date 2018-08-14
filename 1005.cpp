#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> result;
    set<int> stmp;
    int k = 0;
    int num[105];
    cin >> k;
    for (int i = 0; i < k; i++)
        cin >> num[i];
    for (int i = 0; i < k; i++) {
        int tmp = 0;
        if (!stmp.count(num[i])) {
            result.insert(num[i]);
            stmp.insert(num[i]);
        }
        while (num[i] != 1) {
            if (num[i] % 2 == 0)
                num[i] /= 2;
            else
                num[i] = (num[i] * 3 + 1) / 2;
            stmp.insert(num[i]);
            if (result.count(num[i])) {
                set<int>::iterator it;
                it = result.find(num[i]);
                result.erase(it);
            }
        }
    }
    int size = result.size() - 1;
    set<int>::reverse_iterator rit;
    for (rit = result.rbegin(); rit != result.rend(); rit++) {
        cout << *rit;
        if (size--)
            cout << ' ';
    }
    cout << endl;

    return 0;
}

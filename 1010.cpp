#include <iostream>
using namespace std;

int main() {
    int x = 0, y = 0;
    bool flag = false;
    while (cin >> x >> y) {
        if (x * y) {
            if (flag)
                cout << ' ';
            else
                flag = true;
            cout << x * y << ' ' << y - 1;
        }
    }
    if (!flag)
        cout << "0 0" << endl;

    return 0;
}

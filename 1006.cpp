#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    int chu = n, yu = 0;
    int num[3], loc = 0;
    while (chu >= 10) {
        yu = chu % 10;
        chu /= 10;
        num[loc] = yu;
        loc++;
    }
    num[loc] = chu;
    for (int i = loc; i >= 0; i--) {
        if (i == 2)
            for (int j = 0; j < num[i]; j++)
                cout << 'B';
        else if (i == 1)
            for (int j = 0; j < num[i]; j++)
                cout << 'S';
        else
            for (int j = 0; j < num[i]; j++)
                cout << j + 1;
    }
    cout << endl;

    return 0;
}

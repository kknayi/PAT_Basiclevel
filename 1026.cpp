#include <iostream>
using namespace std;

const int CLK_TCK = 100;

void out(int x) {
    if (x >= 10)
        cout << x;
    else if (x < 10 && x != 0)
        cout << "0" << x;
    else
        cout << "00";
}

int main() {
    float c1 = 0, c2 = 0;
    cin >> c1 >> c2;
    float time = (c2 - c1) / CLK_TCK + 0.5;
    int T = time;
    int h = 0, m = 0, s = 0;
    h = T / 3600;
    m = (T - h * 3600) / 60;
    s = T - h * 3600 - m * 60;

    out(h);
    cout << ":";
    out(m);
    cout << ":";
    out(s);
    cout << endl;

    return 0;
}

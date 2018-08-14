#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a = 0, da = 0;
    int b = 0, db = 0;
    cin >> a >> da >> b >> db;
    int cnta = 0, cntb = 0;
    int chu = a, yu = 0;
    while (chu >= 10) {
        yu = chu % 10;
        chu /= 10;
        if (yu == da)
            cnta++;
    }
    if (chu == da) cnta++;
    chu = b, yu = 0;
    while (chu >= 10) {
        yu = chu % 10;
        chu /= 10;
        if (yu == db)
            cntb++;
    }
    if (chu == db) cntb++;
    int pa = 0, pb = 0;
    while (cnta--) {
        pa += pow(10, cnta) * da;
    }
    while (cntb--) {
        pb += pow(10, cntb) * db;
    }
    cout << pa + pb << endl;

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    int vec1 = 0, lose1 = 0, draw1 = 0;
    int ges1[3 + 1] = { 0 };
    int vec2 = 0, lose2 = 0, draw2 = 0;
    int ges2[3 + 1] = { 0 };
    while (n--) {
        char tmp1, tmp2;
        cin >> tmp1 >> tmp2;
        if (tmp1 == 'C' && tmp2 == 'J') {
            vec1++;
            lose2++;
            ges1[2]++;
        }
        else if (tmp1 == 'J' && tmp2 == 'B') {
            vec1++;
            lose2++;
            ges1[3]++;
        }
        else if (tmp1 == 'B' && tmp2 == 'C') {
            vec1++;
            lose2++;
            ges1[1]++;
        }
        else if (tmp2 == 'C' && tmp1 == 'J') {
            vec2++;
            lose1++;
            ges2[2]++;
        }
        else if (tmp2 == 'J' && tmp1 == 'B') {
            vec2++;
            lose1++;
            ges2[3]++;
        }
        else if (tmp2 == 'B' && tmp1 == 'C') {
            vec2++;
            lose1++;
            ges2[1]++;
        }
        else if (tmp1 == tmp2) {
            draw1++;
            draw2++;
        }
    }
    cout << vec1 << ' ' << draw1 << ' ' << lose1 << endl;
    cout << vec2 << ' ' << draw2 << ' ' << lose2 << endl;

    int maxx = 0;
    for (int i = 1; i < 4; i++) {
        if (ges1[i] > maxx)
            maxx = ges1[i];
    }
    for (int i = 1; i < 4; i++) {
        if (ges1[i] == maxx) {
            if (i == 1)
                cout << "B ";
            else if (i == 2)
                cout << "C ";
            else if (i == 3)
                cout << "J ";
            break;
        }
    }
    maxx = 0;
    for (int i = 1; i < 4; i++) {
        if (ges2[i] > maxx)
            maxx = ges2[i];
    }
    for (int i = 1; i < 4; i++) {
        if (ges2[i] == maxx) {
            if (i == 1)
                cout << 'B' << endl;
            else if (i == 2)
                cout << 'C' << endl;
            else if (i == 3)
                cout << 'J' << endl;
            break;
        }
    }

    return 0;
}

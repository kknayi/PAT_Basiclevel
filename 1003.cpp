#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int n = 0;
    int cnta = 0, cntb = 0, cntc = 0;
    bool flagp = false, flagt = false, flaga = false, flagx = false;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> str;
        for (int j = 0; j < str.size(); j++) {
            switch (str[j]) {
                case 'A':
                    flaga = true;
                    if (!flagp && !flagt) cnta++;
                    else if (flagp && !flagt) cntb++;
                    else if (flagp && flagt) cntc ++;
                    break;
                case 'P':
                    if (flagp)
                        flagx = true;
                    else
                        flagp = true;
                    break;
                case 'T':
                    if (flagt)
                        flagx = true;
                    else
                        flagt = true;
                    break;
                default:
                    flagx = true;
                    break;
            }
            if (flagx) break;
        }
        if (flagx)
            cout << "NO" << endl;
        else if (flagp && flagt && flaga && cntb != 0 && cnta * cntb == cntc)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        cnta = cntb = cntc = 0;
        flagp = flagt = flaga = flagx = false;
    }

    return 0;
}

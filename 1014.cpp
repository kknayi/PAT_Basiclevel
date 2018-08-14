#include <iostream>
#include <string>
using namespace std;

int main() {
    string str[4];
    for (int i = 0; i < 4; i++)
        getline(cin, str[i]);
    int str_1 = 0, str_2 = 0;
    str_1 = str[0].size();
    str_2 = str[1].size();
    int len = 0;
    if (str_1 > str_2)
        len = str_2;
    else len = str_1;
    int cnt = 0;
    for (int i = 0; i < len; i++) {
        if (str[0][i] == str[1][i]) {
            char tmp = str[0][i];
            if (cnt == 0 && tmp >= 'A' && tmp <= 'G') {
                cnt++;
                switch(tmp) {
                case 'A':
                    cout << "MON ";
                    break;
                case 'B':
                    cout << "TUE ";
                    break;
                case 'C':
                    cout << "WED ";
                    break;
                case 'D':
                    cout << "THU ";
                    break;
                case 'E':
                    cout << "FRI ";
                    break;
                case 'F':
                    cout << "SAT ";
                    break;
                case 'G':
                    cout << "SUN ";
                    break;
                }
            }
            else if (cnt == 1 && (isdigit(tmp) || tmp >= 'A' && tmp <= 'N')) {
                cnt++;
                switch(tmp) {
                case '0':
                    cout << "00:";
                    break;
                case '1':
                    cout << "01:";
                    break;
                case '2':
                    cout << "02:";
                    break;
                case '3':
                    cout << "03:";
                    break;
                case '4':
                    cout << "04:";
                    break;
                case '5':
                    cout << "05:";
                    break;
                case '6':
                    cout << "06:";
                    break;
                case '7':
                    cout << "07:";
                    break;
                case '8':
                    cout << "08:";
                    break;
                case '9':
                    cout << "09:";
                    break;
                case 'A':
                    cout << "10:";
                    break;
                case 'B':
                    cout << "11:";
                    break;
                case 'C':
                    cout << "12:";
                    break;
                case 'D':
                    cout << "13:";
                    break;
                case 'E':
                    cout << "14:";
                    break;
                case 'F':
                    cout << "15:";
                    break;
                case 'G':
                    cout << "16:";
                    break;
                case 'H':
                    cout << "17:";
                    break;
                case 'I':
                    cout << "18:";
                    break;
                case 'J':
                    cout << "19:";
                    break;
                case 'K':
                    cout << "20:";
                    break;
                case 'L':
                    cout << "21:";
                    break;
                case 'M':
                    cout << "22:";
                    break;
                case 'N':
                    cout << "23:";
                    break;
                }
            }
        }
        if (cnt > 1)
            break;
    }
    str_1 = str[2].size();
    str_2 = str[3].size();
    if (str_1 > str_2)
        len = str_2;
    else len = str_1;
    for (int i = 0; i < len; i++) {
        if (str[2][i] == str[3][i] && ((str[2][i] >= 'a' && str[2][i] <= 'z') || (str[2][i] >= 'A' && str[2][i] <= 'Z'))) {
            if (i < 10)
                cout << "0" << i << endl;
            else
                cout << i << endl;
            break;
        }
    }

    return 0;
}

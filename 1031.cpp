#include <iostream>
#include <string>
using namespace std;

int main() {
    int Quan[] = { 7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2 };
    char M[] = { '1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2' };
    int n = 0;
    int cnt = 0;
    cin >> n;
    while (n--) {
        string instr;
        cin >> instr;
        int sum = 0;
        bool flag = true;
        for (int i = 0; i < 17; i++) {
            if (!isdigit(instr[i])) {
                flag = false;
                cout << instr << endl;
                break;
            }
            else
                sum += (int(instr[i]) - 48) * Quan[i];
        }
        if (flag) {
            if (M[sum % 11] != instr[17]) {
                cout << instr << endl;
                cnt++;
            }
        }
    }
    if (cnt == 0)
        cout << "All passed" << endl;

    return 0;
}

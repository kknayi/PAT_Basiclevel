#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    char num;
    int sum = 0;
    for (int i = 0; i < s.length(); i++)
        sum += int(s[i]) - 48;
    int chu = sum, yu = 0;
    int digit[105], loc = 0;
    while (chu >= 10) {
        yu = chu % 10;
        chu /= 10;
        digit[loc] = yu;
        loc++;
    }
    digit[loc] = chu;
    for (int i = loc; i >= 0; i--) {
        switch (digit[i]) {
        case 1:
            cout << "yi";
            break;
        case 2:
            cout << "er";
            break;
        case 3:
            cout << "san";
            break;
        case 4:
            cout << "si";
            break;
        case 5:
            cout << "wu";
            break;
        case 6:
            cout << "liu";
            break;
        case 7:
            cout << "qi";
            break;
        case 8:
            cout << "ba";
            break;
        case 9:
            cout << "jiu";
            break;
        case 0:
            cout << "ling";
            break;
        }
        if (i != 0)
            cout << ' ';
        else
            cout << endl;
    }

    return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    getline(cin, str);
    int last = str.size();
    for (int i = str.size() - 1; i >= 0; i--) {
        if (str[i] == ' ' || i == 0) {
            if (i == 0) i = -1;
            for (int j = i + 1; j < last; j++)
                cout << str[j];
            if (i != -1)
                cout << ' ';
            else
                cout << endl;
            last = i;
        }
    }

    return 0;
}

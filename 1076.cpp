#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    cin.ignore();
    string str;
    vector<int> num;
    for (int i = 0; i < n; i++) {
        getline(cin, str);
        for (int i = 0; i < str.size(); i++) {
            if (str[i] == 'T') {
                switch (str[i - 2]) {
                case 'A':
                    num.push_back(1);
                    break;
                case 'B':
                    num.push_back(2);
                    break;
                case 'C':
                    num.push_back(3);
                    break;
                case 'D':
                    num.push_back(4);
                    break;
                }
            }
        }
    }
    for (int i = 0; i < num.size(); i++)
        cout << num[i];
    cout << endl;

    return 0;
}

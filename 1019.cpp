#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

bool compare(int a, int b) {
    return a > b;
}

int main() {
    vector<int> num;
    int n = 0;
    cin >> n;
    while (1) {
        int chu = n, yu = 0;
        while (chu >= 10) {
            yu = chu % 10;
            chu /= 10;
            num.push_back(yu);
        }
        num.push_back(chu);
        if (num.size() < 4) {
            for (int i = num.size(); i < 4; i++)
                num.push_back(0);
        }
        sort(num.begin(), num.end(), compare);
        int large = 0;
        int jie = num.size() - 1;
        for (int i = 0; i < num.size(); i++) {
            large += num[i] * pow(10, jie);
            jie--;
        }
        if (large < 1000) {
            if (large > 100)
                cout << '0';
            else if (large > 10)
                cout << "00";
            else
                cout << "000";
        }
        cout << large << " - ";
        sort(num.begin(), num.end());
        int little = 0;
        jie = num.size() - 1;
        for (int i = 0; i < num.size(); i++) {
            little += num[i] * pow(10, jie);
            jie--;
        }
        if (little < 1000) {
            if (little > 100)
                cout << '0';
            else if (little > 10)
                cout << "00";
            else
                cout << "000";
        }
        cout << little << " = ";
        if (large - little < 1000) {
            if (large - little > 100)
                cout << '0';
            else if (large - little > 10)
                cout << "00";
            else
                cout << "000";
        }
        cout << large - little << endl;
        if (large - little == 6174)
            break;
        else if (large == little)
            break;
        else {
            n = large - little;
            num.clear();
        }
    }

    return 0;
}

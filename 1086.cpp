#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec;
    int a = 0, b = 0;
    cin >> a >> b;
    int x = a * b;
    int chu = x, yu = 0;
    while (chu >= 10) {
        yu = chu % 10;
        chu /= 10;
        vec.push_back(yu);
    }
    vec.push_back(chu);
    bool flag = true;
    for (int i = 0; i < vec.size(); i++) {
        if (vec[i] == 0 && flag && i != vec.size() - 1)
            continue;
        cout << vec[i];
        flag = false;
    }
    cout << endl;

    return 0;
}

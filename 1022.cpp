#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> num;
    int a = 0, b = 0;
    cin >> a >> b;
    int d = 0;
    cin >> d;
    int divisor = a + b, remainder = 0;
    while (divisor >= d) {
        remainder = divisor % d;
        divisor /= d;
        num.push_back(remainder);
    }
    num.push_back(divisor);

    for (int i = num.size() - 1; i >= 0; i--)
        cout << num[i];
    cout << endl;

    return 0;
}

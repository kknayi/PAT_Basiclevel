#include <iostream>
using namespace std;

int main() {
    int T = 0, K = 0;
    cin >> T >> K;
    for (int i = 0; i < K; i++) {
        int n1 = 0, b = 0, t = 0, n2 = 0;
        cin >> n1 >> b >> t >> n2;
        if (T <= 0) {
            cout << "Game Over." << endl;
            system("pause");
            return 0;
        }
        if (t > T) {
            cout << "Not enough tokens.  Total = " << T << "." << endl;
            continue;
        }
        if (n1 > n2 && b == 0) {
            T += t;
            cout << "Win " << t << "!  Total = " << T << "." << endl;
        }
        else if (n1 < n2 && b == 1) {
            T += t;
            cout << "Win " << t << "!  Total = " << T << "." << endl;
        }
        else {
            T -= t;
            if (T < 0) {
                cout << "Game Over." << endl;
                system("pause");
                return 0;
            }
            else
                cout << "Lose " << t << ".  Total = " << T << "." << endl;
        }
    }

    return 0;
}

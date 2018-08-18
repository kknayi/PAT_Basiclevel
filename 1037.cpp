#include <iostream>
#include <string>
#include <cmath>
using namespace std;

struct Data {
    string str;
    int g;
    int s;
    int k;
    int Q;
};

int str2int(string s) {
    int num = 0;
    int cnt = 0;
    for (int i = s.size() - 1; i >= 0; i--) {
        num += (int(s[i]) - 48) * pow(10, cnt);
        cnt++;
    }
    return num;
}

void str2num(Data &s) {
    int cnt = 0, loc = 0;
    for (int i = 0; i < s.str.size(); i++) {
        string tmp;
        if (s.str[i] == '.' && cnt == 0) {
            tmp = s.str.substr(0, i);
            s.g = str2int(tmp);
            loc = i;
            cnt++;
        }
        else if (s.str[i] == '.' && cnt == 1) {
            tmp = s.str.substr(loc + 1, i - loc - 1);
            s.s = str2int(tmp);
            loc = i;
            cnt++;
        }
        else if (i == s.str.size() - 1) {
            tmp = s.str.substr(loc + 1, i - loc);
            s.k = str2int(tmp);
            loc = i;
        }
    }
}

void compare(Data &a, Data &b) {
    a.Q = 0;
    b.Q = 0;
    if (a.g > b.g)
        a.Q += 5;
    else if (a.g < b.g)
        b.Q += 5;
    if (a.s > b.s)
        a.Q += 3;
    else if (a.s < b.s)
        b.Q += 3;
    if (a.k > b.k)
        a.Q++;
    else if (a.k < b.k)
        b.Q++;
}

int main() {
    Data P, A;
    cin >> P.str >> A.str;
    str2num(P);
    str2num(A);
    compare(P, A);
    int g = 0, s = 0, k = 0;
    if (P.Q < A.Q) {
        if (A.k >= P.k)
            k = A.k - P.k;
        else {
            A.s--;
            A.k += 29;
            k = A.k - P.k;
        }
        if (A.s >= P.s)
            s = A.s - P.s;
        else {
            A.g--;
            A.s += 17;
            s = A.s - P.s;
        }
        g = A.g - P.g;
    }
    else {
        if (P.k >= A.k)
            k = P.k - A.k;
        else {
            P.s--;
            P.k += 29;
            k = P.k - A.k;
        }
        if (P.s >= A.s)
            s = P.s - A.s;
        else {
            P.g--;
            P.s += 17;
            s = P.s - A.s;
        }
        g = -(P.g - A.g);
    }
    cout << g << "." << s << "." << k << endl;

    return 0;
}

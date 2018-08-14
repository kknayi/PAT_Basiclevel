#include <iostream>
#include <vector>
using namespace std;

struct stu {
    int id;
    int d;
    int c;
};

int main() {
    vector<stu> s;
    vector<stu> s1;
    vector<stu> s2;
    vector<stu> s3;
    vector<stu> s4;
    int n = 0, low = 0, high = 0;
    cin >> n >> low >> high;
    for (int i = 0; i < n; i++) {
        stu tmp;
        cin >> tmp.id >> tmp.d >> tmp.c;
        s.push_back(tmp);
    }
    for (int i = 0; i < s.size(); i++) {
        if (s[i].d >= high && s[i].c >= high)
            s1.push_back(s[i]);
        else if (s[i].d >= high && s[i].c < high && s[i].c >= low)
            s2.push_back(s[i]);
        else if (s[i].d < high && s[i].d >= low && s[i].c < high && s[i].c >= low && s[i].d > s[i].c)
            s3.push_back(s[i]);
        else if (s[i].d >= low && s[i].c >= low)
            s4.push_back(s[i]);
    }

    //************s1*************
    for (int i = 0; i < s1.size(); i++) {
        for (int j = i + 1; j < s1.size(); j++) {
            if (s1[i].d + s1[i].c < s1[j].d + s1[j].c) {
                stu tmp;
                tmp = s1[i];
                s1[i] = s1[j];
                s1[j] = tmp;
            }
            else if (s1[i].d + s1[i].c == s1[j].d + s1[j].c) {
                if (s1[i].d < s1[j].d) {
                    stu tmp;
                    tmp = s1[i];
                    s1[i] = s1[j];
                    s1[j] = tmp;
                }
                else if (s1[i].d == s1[j].d) {
                    if (s1[i].id > s1[j].id) {
                        stu tmp;
                        tmp = s1[i];
                        s1[i] = s1[j];
                        s1[j] = tmp;
                    }
                }
            }
        }
    }
    cout << s1.size() + s2.size() + s3.size() + s4.size() << endl;
    for (int i = 0; i < s1.size(); i++)
        cout << s1[i].id << ' ' << s1[i].d << ' ' << s1[i].c << endl;

    //************s2*************
    for (int i = 0; i < s2.size(); i++) {
        for (int j = i + 1; j < s2.size(); j++) {
            if (s2[i].d + s2[i].c < s2[j].d + s2[j].c) {
                stu tmp;
                tmp = s2[i];
                s2[i] = s2[j];
                s2[j] = tmp;
            }
            else if (s2[i].d + s2[i].c == s2[j].d + s2[j].c) {
                if (s2[i].d < s2[j].d) {
                    stu tmp;
                    tmp = s2[i];
                    s2[i] = s2[j];
                    s2[j] = tmp;
                }
                else if (s2[i].d == s2[j].d) {
                    if (s2[i].id > s2[j].id) {
                        stu tmp;
                        tmp = s2[i];
                        s2[i] = s2[j];
                        s2[j] = tmp;
                    }
                }
            }
        }
    }
    for (int i = 0; i < s2.size(); i++)
        cout << s2[i].id << ' ' << s2[i].d << ' ' << s2[i].c << endl;

    //************s3*************
    for (int i = 0; i < s3.size(); i++) {
        for (int j = i + 1; j < s3.size(); j++) {
            if (s3[i].d + s3[i].c < s3[j].d + s3[j].c) {
                stu tmp;
                tmp = s3[i];
                s3[i] = s3[j];
                s3[j] = tmp;
            }
            else if (s3[i].d + s3[i].c == s3[j].d + s3[j].c) {
                if (s3[i].d < s3[j].d) {
                    stu tmp;
                    tmp = s3[i];
                    s3[i] = s3[j];
                    s3[j] = tmp;
                }
                else if (s3[i].d == s3[j].d) {
                    if (s3[i].id > s3[j].id) {
                        stu tmp;
                        tmp = s3[i];
                        s3[i] = s3[j];
                        s3[j] = tmp;
                    }
                }
            }
        }
    }
    for (int i = 0; i < s3.size(); i++)
        cout << s3[i].id << ' ' << s3[i].d << ' ' << s3[i].c << endl;

    //************s4*************
    for (int i = 0; i < s4.size(); i++) {
        for (int j = i + 1; j < s4.size(); j++) {
            if (s4[i].d + s4[i].c < s4[j].d + s4[j].c) {
                stu tmp;
                tmp = s4[i];
                s4[i] = s4[j];
                s4[j] = tmp;
            }
            else if (s4[i].d + s4[i].c == s4[j].d + s4[j].c) {
                if (s4[i].d < s4[j].d) {
                    stu tmp;
                    tmp = s4[i];
                    s4[i] = s4[j];
                    s4[j] = tmp;
                }
                else if (s4[i].d == s4[j].d) {
                    if (s4[i].id > s4[j].id) {
                        stu tmp;
                        tmp = s4[i];
                        s4[i] = s4[j];
                        s4[j] = tmp;
                    }
                }
            }
        }
    }
    for (int i = 0; i < s4.size(); i++)
        cout << s4[i].id << ' ' << s4[i].d << ' ' << s4[i].c << endl;

    return 0;
}

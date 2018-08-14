#include <iostream>
#include <vector>
using namespace std;

struct Student {
    string name;
    string num;
    int source;
};

int main() {
    vector<Student> s;
    Student stu;
    int n = 0;
    string name, num;
    int source;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> name >> num >> source;
        stu.name = name;
        stu.num = num;
        stu.source = source;
        s.push_back(stu);
    }
    int max_sou = 0, max_loc = 0;
    int min_sou = 101, min_loc = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i].source > max_sou) {
            max_sou = s[i].source;
            max_loc = i;
        }
        if (s[i].source < min_sou) {
            min_sou = s[i].source;
            min_loc = i;
        }
    }
    cout << s[max_loc].name << ' ' << s[max_loc].num << endl;
    cout << s[min_loc].name << ' ' << s[min_loc].num << endl;

    return 0;
}

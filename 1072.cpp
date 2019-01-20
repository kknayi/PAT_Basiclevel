#include <iostream>
#include <string>
using namespace std;

int main() {
    string stu;
    int n = 0, m = 0, k = 0;
    int cnt_stu = 0, cnt_item = 0;
    string check[10];
    string item[15];
    cin >> n >> m;
    for (int i = 0; i < m; i++)
        cin >> check[i];
    for (int i = 0; i < n; i++) {
        bool flag = false;
        cin >> stu >> k;
        for (int j = 0; j < k; j++) {
            cin >> item[j];
            if (!flag)
                for (int a = 0; a < m; a++)
                    if (item[j] == check[a]) flag = true;
        }
        if (flag) {
            cout << stu << ':';
            for (int j = 0; j < k; j++)
                for (int a = 0; a < m; a++)
                    if (item[j] == check[a]) {
                        cnt_item++;
                        cout << ' ' << item[j];
                    }
            cnt_stu++;
            cout << endl;
        }
    }
    cout << cnt_stu << ' ' << cnt_item << endl;

    return 0;
}

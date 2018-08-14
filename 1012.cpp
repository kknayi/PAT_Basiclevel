#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;

int main() {
	vector<int> num;
	int n = 0;
	cin >> n;
	while (n--) {
		int tmp = 0;
		cin >> tmp;
		num.push_back(tmp);
	}
	int A1 = 0;
	int A2 = 0;
	int A3 = 0;
	float A4 = 0;
	int A5 = 0;
	int A2_cnt = 0;
	bool flag = true;
	int cnt = 0;
	int maxx = 0;
	for (int i = 0; i < num.size(); i++) {
		if (num[i] % 5 == 0 && num[i] % 2 == 0)
			A1 += num[i];
		else if (num[i] % 5 == 1) {
            A2_cnt++;
			if (flag) {
				A2 += num[i];
				flag = false;
			}
			else {
				A2 -= num[i];
				flag = true;
			}
		}
		else if (num[i] % 5 == 2)
			A3++;
		else if (num[i] % 5 == 3) {
			A4 += num[i];
			cnt++;
		}
		else if (num[i] % 5 == 4) {
			if (num[i] > maxx)
				maxx = num[i];
		}
	}
	if (A4 != 0)
		A4 /= cnt;
	A5 = maxx;
	if (A1 == 0)
		cout << "N ";
	else
		cout << A1 << ' ';
	if (A2_cnt == 0)
		cout << "N ";
	else
		cout << A2 << ' ';
	if (A3 == 0)
		cout << "N ";
	else
		cout << A3 << ' ';
	if (A4 == 0)
		cout << "N ";
	else
		printf("%.1f ", A4);
	if (A5 == 0)
		cout << "N";
	else
		cout << A5 << endl;

	return 0;
}

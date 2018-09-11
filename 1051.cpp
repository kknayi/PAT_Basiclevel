#include <cstdio>
#include <cmath>

int main() {
    double a = 0, b = 0, c = 0, d = 0;
    bool flag1 = false, flag2 = false;
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
    double tmp1 = 0, tmp2 = 0;
    tmp1 = a * c * cos(b + d);
    tmp2 = a * c * sin(b + d);
    if (fabs(tmp1) < 0.01) flag1 = true;
    if (fabs(tmp2) < 0.01) flag2 = true;
    if (flag1 && flag2)
        printf("0\n");
    else if (flag1 && !flag2)
        printf("0.00%+.2fi\n", tmp2);
    else if (!flag1 && flag2)
        printf("%.2f+0.00i\n", tmp1);
    else
        printf("%.2f%+.2fi\n", tmp1, tmp2);

    return 0;
}

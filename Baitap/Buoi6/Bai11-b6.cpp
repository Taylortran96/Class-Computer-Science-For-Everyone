// Sn = 2 + 4 + 6 + 8 + … + 2*n
// Input
// Số nguyên dương n. ( 1 ≤ n ≤ 10^9).
// Output
// Kết quả của bài toán

#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <cmath>
using namespace std;

double tinhkhoangcach(int x1, int x2, int y1, int y2)
{
    double khoangcach = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    return khoangcach;
}

int main()
{
    int n;
    cout << "Nhập giá trị n: ";
    cin >> n;

    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum += (2 * i);
    }

    cout << "Tổng của dãy số: " << sum << endl;

    return 0;
}
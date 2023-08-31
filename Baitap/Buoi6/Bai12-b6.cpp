// Tính tổng 5
// Sn = -1 + 2 - 3 + 4 - 5 + 6 + …. + (-1)^n n
// Input
// Số nguyên dương n. ( 1 ≤ n ≤ 10^16).
// Output
// Kết quả của bài toán

#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    long long n;
    cout << "Nhập giá trị n: ";
    cin >> n;

    long long sum = 0;
    for (long long i = 0; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
        else
        {
            sum -= i;
        }
    }

    cout << "Tổng của dãy số: " << sum << endl;

    return 0;
}
// Sn = 1^2 + 2^2 + 3^2 + 4^2 + 5^2+ … + n^2
// Input
// Số nguyên không âm n. ( 0 ≤ n ≤ 10^5).
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
    int n;
    cout << "Nhập giá trị n: ";
    cin >> n;

    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum += i * i;
    }

    cout << "Tổng của dãy số: " << sum << endl;

    return 0;
}
// Kiểm tra số chia hết cho 3 và 5
// Input
// Số nguyên n. (-10^18 ≤ n ≤ 10^18)
// Output
// In ra 1 nếu n chia hết cho cả 3 và 5, ngược lại in ra 0

#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    if (n % 3 == 0 && n % 5 == 0)
    {
        cout << 1;
    }
    else
    {
        cout << 0;
    }

    return 0;
}
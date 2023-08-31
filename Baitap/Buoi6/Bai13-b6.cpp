// Số chia hết lớn nhất
// Cho 2 số nguyên dương a và b. Tìm số chia hết cho b lớn nhất và không vượt qua a.
// Chú ý không dùng vòng lặp và các hàm có sẵn.
// Input
// 2 số nguyên dương a, b ( 1 ≤ b ≤ a ≤10^8)
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
    int a, b;
    cout << "Nhập  a: ";
    cin >> a;
    cout << "Nhập b: ";
    cin >> b;

    int maxdivision = (a / b) * b; // Nếu bạn chia a cho b và lấy phần nguyên, kết quả sẽ là số chia hết lớn nhất không vượt qua a.
    cout << "Số chia hết cho b lớn nhất và không vượt qua a: " << maxdivision << endl;

    return 0;
}

// Giải thích:
// Cách giải quyết đơn giản nhất là chia a cho b, lấy phần nguyên và nhân lại với b.

// Nhập vào 2 số nguyên, in ra tổng, hiệu, tích, thương ( lấy độ chính xác với 2 chữ số).
// Input
// 2 số nguyên a, b với b khác 0( -10^9 ≤a , b ≤10^9)
// Output
// Tổng, hiệu, tích, thương của 2 số

#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

int main()
{
    int a, b;
    cout << "Nhập 2 số a và b (b khác 0): ";
    cin >> a >> b;

    if (b < 0)
    {
        cout << "b không được < 0";
    }

    int sum = a + b;
    int diff = a - b;
    int multiply = a * b;
    double product = a / b;
    cout << "Tổng a và b: " << fixed << setprecision(2) << sum << endl;
    cout << "Hiệu a và b: " << fixed << setprecision(2) << diff << endl;
    cout << "Tích a và b: " << fixed << setprecision(2) << multiply << endl;
    cout << "Thương a và b: " << fixed << setprecision(2) << product << endl;

    return 0;
}
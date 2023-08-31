// Tính chu vi, diện tích hình tròn
// Input
// Bán kính r của hình tròn là một số nguyên. (1≤r≤10^6)
// Output
// Chu vi và diện tích của hình tròn lấy độ chính xác với 2 chữ số

#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int r;
    cout << "Nhập bán kính hình tròn: ";
    cin >> r;

    double pi = 3.1415926535;
    double chuvi = 2 * pi * r;
    double dientich = pi * pow(r, 2);
    cout << "Chu vi hình tròn: " << fixed << setprecision(2) << chuvi << endl;
    cout << "Diện tích hình tròn: " << fixed << setprecision(2) << dientich << endl;

    return 0;
}
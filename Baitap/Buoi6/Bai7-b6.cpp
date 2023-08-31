// Công thức chuyển đơn vị đo nhiệt độ từ C sang F như sau: F = (C * 9 / 5) + 32
// Viết chương trình C cho phép nhập vào nhiệt độ đo theo độ C là số nguyên dương
// không quá 10^6, thực hiện chuyển sang đơn vị đo độ F và in ra màn hình. (Lưu ý luôn lấy 2 chữ số thập phân sau dấu chấm phẩy)

#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int C;
    cout << "Nhập nhiệt độ theo độ C: ";
    cin >> C;

    double F = (C * 9 / 5) + 32;

    cout << "Nhiệt độ theo độ F: " << fixed << setprecision(2) << F << endl;

    return 0;
}
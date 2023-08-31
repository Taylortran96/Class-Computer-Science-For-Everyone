// Yêu cầu: Cho ba số nguyên dương a , b và c, hãy tính S = a*(b+c)+b*(a+c).
// Dữ liệu: Một dòng ba số nguyên a, b, c ( 0 < |a|, |b|, |c |< 10^9), a và b cách nhau một khoảng trắng.
// Kết quả: Một dòng ghi giá trị S = a*(b+c) + b*(a+c).
#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cout << "Nhap vao so nguyen a,b, c: ";
    cin >> a >> b >> c;

    int S = a * (b + c) + b * (a + c);
    if (a > 0 && a < 10 && b > 0 && b < 10 && c > 0 && c < 10)
    {
        cout << S << endl;
    }
    else
    {
        cout << "Input Sai" << endl;
    }
    return 0;
}
// Phần nguyên, phần dư
// Tính và in ra phần nguyên, phần dư của phép chia 2 số nguyên a, b.
// 2 số nguyên a, b với b khác 0( -10^18 ≤a, b ≤10^18)

#include <iostream>

using namespace std;
int main()
{
    // Khai báo a, b -- Nhập a và b
    long long a, b; // sử dụng kiểu long long để đảm bảo tính được với số nguyên lớn
    cout << "Nhap vao so nguyen a: ";
    cin >> a;
    cout << "Nhap vao so nguyen b: ";
    cin >> b;

    if (b != 0)
    {
        long long phannguyen = a / b;
        long long phandu = a % b;
        cout << "Phần nguyên: " << phannguyen << endl;
        cout << "Phần dư: " << phandu << endl;
    }
    else
    {
        cout << "Số b phải khác 0" << endl;
    }

    return 0;
}

// #include <iostream>

// using namespace std;
// int main()
// {
//     // Khai báo a, b -- Nhập a và b
//     long long a, b;
//     cin >> a >> b;

//     if (b != 0)
//     {
//         // Khai báo phần nguyên và phần dư
//         long long phannguyen = a / b;
//         long long phandu = a % b;
//         cout << "phannguyen: " << phannguyen << endl;
//         cout << "phandu: " << phandu << endl;
//     }
//     else
//     {
//         cout << "Số b không được bằng 0." << endl;
//     }

//     return 0;
// }
#include <iostream>
using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;

    if (b != 0) {
        long long quotient = a / b;
        long long remainder = a % b;

        cout << "Phần nguyên " << quotient << endl;
        cout << "Phần dư " << remainder << endl;
    } else {
        cout << "Số b không được bằng 0." << endl;
    }

    return 0;
}
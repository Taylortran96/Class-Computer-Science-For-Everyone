// Cho biểu thức A(x) = x^3 + 3x^2 + x + 1
// Với giá trị của x được nhập từ bàn phím, tính và in ra giá trị của biểu thức trên
// Input
// Số nguyên dương x không quá 10^5
// Output
// Kết quả của biểu thức A(x)

#include <iostream>

using namespace std;

int main()
{
    int x;
    cout << "Nhập giá trị của x: ";
    cin >> x;

    int result = x * x * x + 3 * x * x + x + 1;
    cout << "Ket qua cua bieu thuc A(x) la:" << result << endl;

    return 0;
}

// Tham khảo:
//  #include <iostream>

// using namespace std;

// int main() {
//     int x;

//     cin >> x;

//     if (x > 0 && x < 10) {
//         cout << x * x * x + 3 * x * x + x + 1 << endl;
//     } else {
//         cout << "Nhap sai" << endl;
//     }

//     return 0;
// }

// Cho 2 số nguyên dương a và b. Tìm số chia hết cho b nhỏ nhất và lớn hơn hoặc bằng a.
// Chú ý không dùng vòng lặp và các hàm có sẵn.
// Input
// 2 số nguyên dương a, b ( 1 ≤ b ≤ a ≤10^8)
// Output
// Kết quả của bài toán

// Cách 1:
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

    int mindivision = ((a - 1) / (b + 1)) * b;

    cout << "Số chia hết cho b nhỏ nhất và lớn hơn hoặc bằng a" << mindivision << endl;

    return 0;
}
// Giải thích
// Cần tìm số chia hết lớn nhất nhỏ hơn hoặc bằng a và cộng thêm b để có được số chia hết nhỏ nhất lớn hơn hoặc bằng a
//(a - 1)/ (b + 1) => tính số lượng đơn vị b cần để đạt được a hoặc vượt qua a
//  Lấy phần nguyên của phép tính này
//  Nhân với b để tìm được số chia hết nhỏ nhất lớn hơn hoặc bằng a.

// Cách 2:
// Cách 1:
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

    int mindivision = a + (b - a % b) % b;

    cout << "Số chia hết cho b nhỏ nhất và lớn hơn hoặc bằng a" << mindivision << endl;

    return 0;
}
// Giải thích
//  `a % b`: tính phần dư khi a chia cho b
//  `(b - a % b) % b`: tìm số lượng đơn vị b cần thêm vào để a cộng với một bội số của b.
//  Thêm vào a để tìm số chia hết lớn nhất nhỏ hơn hoặc bằng a
//  Cộng thêm `(b - a % b) % b` để tìm số chia hết nhỏ nhất lớn hơn hoặc bằng a
// Nhập vào n số nguyên không âm, đếm số lượng số là số nguyên tố trong dãy số vừa nhập.
// Input:
// Dòng đầu tiên là n (1<=n<=10000) - số lượng số nguyên trong dãy.
// Dòng thứ 2 là n số nguyên trong dãy
// Output:
// Số lượng số nguyên tố trong dãy

// Định nghĩa: số nguyên tố là số lớn hơn 1 và chỉ chia hết cho 1 và chính nó.
// Ví dụ: 2, 3, 5, 7, 11, 13, 17, ... là những số nguyên tố.
// Chú ý: Số 0 và 1 không phải là số nguyên tố. Chỉ có số 2 là số nguyên tố chẵn, tất cả các số chẵn khác không phải là số nguyên tố vì chúng chia hết cho 2.

// Cách 1
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

// Hàm kiểm tra số nguyên tố
bool isPrime(int num)
{
    if (num <= 1)
    {
        return false;
    }

    for (int i = 2, i * i <= num, i++)
    {
        if (num % i == 0)
            return false;
    }

    return true;
}

int main()
{
    int n;
    cout << "Nhập số lượng số nguyên trong dãy: ";
    cin >> n;

    if (n < 1 && n > 100000)
    {
        cout << " n phải >= 1 và <= 10000" << endl;
        return 0;
    }

    vector<int> numbers(n);
    cout << "Nhập số lượng số nguyên trong dãy: ";
    // Duyệt qua mảng
    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }

    int count = 0;
    for (int num : numbers)
    {
        if (isPrime(num))
            count++;
    }

    cout << "Số lượng số nguyên tố có trong dãy: " << count << endl;

    return 0;
}
// Cách 2:
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

bool isPrime(int num)
{
    if (num <= 1)
    {
        return false;
    }

    for (int i = 2, i * i <= num, i++)
    {
        if (num % i == 0)
            return false;
    }

    return true;
}

int main()
{
    int n;
    cout << "Nhập số lượng số nguyên trong dãy: ";
    cin >> n;

    // khai báo một mảng có độ dài là n phần tử và dự phòng thêm 5 ô nhớ
    int a[n + 5];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (isPrime(a[i]))
            count++;
    }

    cout << "Số lượng số nguyên tố có trong dãy: " << count << endl;

    return 0;
}

// Cách 3
#include <iostream>
#include <cmath>
using namespace std;

// Kiểm tra số nguyên tố
bool isPrime(int n)
{
    // nếu n < 2 thì không phải là số nguyên tố
    if (n < 2)
        return false;

    // sử dụng vòng lặp for lặp từ 2 đến căn bậc hai của n
    int squareRoot = sqrt(n);
    for (int i = 2; i <= squareRoot; i++)
    {
        // nếu n chia hết cho i thì không phải là số nguyên tố
        if (n % i == 0)
            return false;
    }
    // còn lại là số nguyên tố
    return true;
}

int main()
{
    int n;
    cout << "Nhập số lượng số nguyên trong dãy: ";
    cin >> n;

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (isPrime(x))
            count++;
    }
    cout << count << endl;
    return 0;
}
// Tham khảo nguồn
// https://freetuts.net/ref/dem-so-nguyen-to-co-trong-mang-mot-chieu-bang-c-c++-644.htmlb
// https://viettuts.vn/bai-tap-cpp/check-so-nguyen-to-trong-cpp

// Nhập một mảng gồm n số nguyên không âm, đếm số lượng chữ số chẵn, số lẻ trong mảng.
// Input:
// Dòng đầu tiên là n (1<=n<=100000) - số lượng số trong dãy Dòng thứ hai là n số trong dãy
// Output:
// Dòng đầu là số lượng chữ số chẵn trong mảng.
// Dòng thứ hai là số lượng chữ số lẻ trong mảng

// Cách 1
#include <vector>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

int evenNumber(int num)
{
    int count = 0;
    while (num != 0)
    {
        int digit = num % 10;
        if (digit % 2 == 0)
            count++;
        num /= 10;
    }
    return count;
}
int oddNumber(int num)
{
    int count = 0;
    while (num != 0)
    {
        int digit = num % 10;
        if (digit % 2 != 0)
            count++;
        num /= 10;
    }
    return count;
}

int main()
{
    int n;
    cout << "Nhập n: ";
    cin >> n;

    int evenCount = 0;
    int oddCount = 0;
    int arr[n + 5];
    cout << "Nhập các số trong dãy: ";
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] % 2 == 0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }
    }

    cout << "Số lượng số chẵn có trong mảng:  " << evenCount << endl;
    cout << "Số lượng số lẻ có trong mảng:  " << oddCount << endl;

    return 0;
}

// Giải thích
// while (num != 0)
// {
//     int digit = num % 10;
//     if (digit % 2 != 0)
//         count++;
//     num /= 10;
// }

// Vòng lặp while sẽ thực hiện kiểm tra số nguyên đó có chữ số cuối cùng lẻ hay không, để làm điều đó:
// 1. Lấy phần dư của số đó cho 10 (num % 10), nghĩa là lấy chữ số cuối cùng của số.
// 2. Kiểm tra nếu chữ số đó lẻ (digit % 2 != 0) thì ta tăng biến đếm count lên 1.
// 3. Chia số nguyên cho 10 để loại bỏ chữ số cuối cùng và tiếp tục thực hiện việc kiểm tra cho đến khi số nguyên đó bằng 0.

// Ví dụ: số nguyên đầu vào là 12345
// 1. kiểm tra chữ số cuối cùng của số đó là 5: 5 là số lẻ => count sẽ tăng lên 1
// 2. Loại bỏ 5 bằng cách chia số nguyên cho 10 => Hiện tại có số 1234
// 3. Tiếp tục kiểm tra số 4: 4 là số chẵn => count k tăng biến
// 4. Loại bỏ 4 bằng cách chia số nguyên cho 10 => Hiện tại có số 123
// Quy trình tiếp tục cho tới khi hêt dãy số nguyên.

// Cách 2
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Nhập n: ";
    cin >> n;

    int evenCount = 0;
    int oddCount = 0;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }
    cout << evenCount << endl;
    cout << oddCount << endl;
    return 0;
}

// Cách 3
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Nhập n: ";
    cin >> n;

    int evenCount = 0;
    int oddCount = 0;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        int temp = arr[i];
        while (temp != 0)
        {
            int digit = temp % 10;
            if (digit % 2 == 0)
                evenCount++;
            else
                oddCount++;
            temp /= 10;
        }
    }
    cout << evenCount << endl;
    cout << oddCount << endl;
    return 0;
}

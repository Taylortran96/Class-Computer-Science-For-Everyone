// Nhập vào n số nguyên không âm, đếm và liệt kê các số thuận nghịch trong dãy số vừa nhập, liệt kê theo thứ tự xuất hiện trong mảng.
// Input:
// Dòng đầu tiên là n (1<=n<=100000) - số lượng số trong dãy
// Dòng thứ hai là n số trong dãy
// Output:
// Dòng đầu tiên là số lượng số thuận nghịch trong dãy
// Dòng thứ 2 liệt kê các số thuận nghịch trong dãy

// Một số được gọi là số thuận nghịch nếu ta đọc từ trái sang phải hay từ phải sang trái số đó ta vẫn nhận được một số giống nhau.
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

bool thuannghich(int num)
{
    int number = 0; // biến number để lưu trữ
    int originalNum = num;

    while (num != 0)
    {
        int x = num % 10;
        number = number * 10 + x;
        num /= 10;
    }
    return (number == originalNum);
}

int main()
{
    int n;
    cout << "Nhập số lượng số trong dãy: ";
    cin >> n;

    int a[n + 5];
    cout << "Nhập các số trong dãy: ";
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    // Vòng lặp for được sử dụng để kiểm tra từng phần tử trong mảng `a` xem có phải là số thuận nghịch hay không bằng cách sử dụng hàm `thuannghich()`
    int count = 0;
    for (int i = 0; i < n; ++i)
    {
        if (thuannghich(a[i]) == 0)
            count++; // hần tử là số thuận nghịch thì biến đếm `count` tăng lên 1
    }

    cout << "Số lượng số thuận nghịch có trong dãy: " << count << endl;

    // In ra các giá trị của mảng `a` thỏa mãn là số thuận nghịch
    for (int i = 0; i < n; ++i)
    {
        if (thuannghich(a[i]))
        {
            cout << " " << a[i];
        }
    }

    return 0;
}

// Cach 2:
#include <iostream>
using namespace std;

// đảo ngược số và so sánh với số ban đầu
bool isPalindrome(int n)
{
    int rev = 0;
    int temp = n; // biến temp để đảo ngược các chữ số của 1 số
    while (temp != 0)
    {
        rev = rev * 10 + temp % 10; // nhân số hiện tại của biến rev với 10 và cộng với số dư của số hiện tại của biến temp khi chia cho 10
        temp /= 10;
    }
    return n == rev;
}

int main()
{
    int n;
    cout << "Nhập số lượng số trong dãy: ";
    cin >> n;

    int count = 0;
    int arr[n];
    // Vòng lặp for được sử dụng để đọc Input từ bàn phím và kiểm tra xem mỗi phần tử trong mảng có phải là số thuận nghịch hay không bằng cách gọi hàm isPalindrome()
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (isPalindrome(arr[i]))
            count++; // phần tử là số thuận nghịch thì biến đếm count tăng lên 1
    }
    cout << count << endl;

    // In ra số lượng các số thuận nghịch được tìm thấy và liệt kê các số đó trên cùng một dòng
    for (int i = 0; i < n; i++)
    {
        if (isPalindrome(arr[i]))
            cout << arr[i] << " ";
    }
    return 0;
}

// Tham khảo:
// https://viettuts.vn/bai-tap-cpp/tim-so-thuan-nghich-trong-cpp
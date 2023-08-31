// Nhập vào mảng số nguyên không âm gồm n phần tử, đếm số lượng và liệt kê các số chính phương trong mảng.
// Input:
// Dòng đầu tiên là n (1<=n<=100) - số lượng số trong dãy
// Dòng thứ hai là n số trong dãy
// Output:
// Dòng đầu tiên là số lượng số chính phương trong mảng.
// Dòng thứ 2 liệt ke các số chính phương trong mảng

// Số chính phương là số bằng bình phương đúng của một số nguyên
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Nhập n: ";
    cin >> n;

    int arr[n];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (sqrt(a[i]) == floor(sqrt(a[i])))
        {
            count++;
        }
    }
    cout << count << endl;
    for (int i = 0; i < n; i++)
    {
        if (sqrt(a[i]) == floor(sqrt(a[i])))
        {
            cout << a[i] << " ";
        }
    }
    return 0;
}

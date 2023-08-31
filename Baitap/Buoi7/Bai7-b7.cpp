// Nhập vào mảng n gồm số nguyên và số nguyên x, đếm số lần xuất hiện của x trong mảng.
// Input:
// Dòng đầu tiên là n (1<=n<=100000) - số lượng số trong dãy
// Dòng thứ hai là n số trong dãy
// Dòng thứ 3 là số nguyên x
// Output:
// Một dòng duy nhất in số lần xuất hiện của x trong mảng

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
    int n, x;
    cout << "Nhập n: ";
    cin >> n;
    cout << "Nhập số nguyên x: ";
    cin >> x;

    int arr[n + 5];
    cout << "Số lượng số trong dãy: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cin >> x;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            count++;
        }
    }
    cout << " Số lần xuất hiện của x trong mảng n: " << count << endl;
    return 0;
}

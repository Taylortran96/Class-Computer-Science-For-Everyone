// Nhập vào mảng gồm n số nguyên, tìm số lớn nhất và nhỏ nhất trong mảng và vị trí của chúng trong mảng, trường hợp có nhiều số lớn nhất hoặc nhỏ nhất thì in ra vị trí xuất hiện cuối cùng.
// Input:
// Dòng đầu tiên là n (1<=n<=100000) - số lượng số trong dãy
// Dòng thứ hai là n số trong dãy
// Output
// Dòng đầu tiên là số lớn nhất và vị trí của nó.
// Dòng thứ hai là số nhỏ nhất và vị trí của nó.

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
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int max_val = arr[0], min_val = arr[0], max_pos = 0, min_pos = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] >= max_val)
        {
            max_val = arr[i];
            max_pos = i;
        }
        if (arr[i] <= min_val)
        {
            min_val = arr[i];
            min_pos = i;
        }
    }
    cout << "Số lớn nhất: " << max_val << " và vị trí: " << max_pos << "." << endl;
    cout << "Số nhỏ nhất: " << min_val << " và vị trí: " << min_pos << "." << endl;
    return 0;
}

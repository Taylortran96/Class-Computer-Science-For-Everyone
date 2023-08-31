// Tìm và in ra vị trí của số nhỏ nhất và nhỏ thứ 2 trong mảng các số nguyên khác nhau.(Các phần tử trong mảng khác nhau đôi một).
// Input:
// Dòng đầu tiên là n (1<=n<=100000) - số lượng số trong dãy
// Dòng thứ hai là n số trong dãy
// Output
// Dòng đầu tiên là vị trí của số nhỏ nhất
// Dòng thứ hai là vị trí của số nhỏ thứ hai.

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int min1 = arr[0], min2 = arr[0], pos1 = 0, pos2 = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min1)
        {
            min2 = min1;
            pos2 = pos1;
            min1 = arr[i];
            pos1 = i;
        }
        else if (arr[i] < min2)
        {
            min2 = arr[i];
            pos2 = i;
        }
    }
    cout << "Vị trí của số nhỏ nhất: " << pos1 << "." << endl;
    cout << "Vị trí của số nhỏ thứ hai: " << pos2 << "." << endl;

    return 0;
}

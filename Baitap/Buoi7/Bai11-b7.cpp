// Nhập vào mảng a[] gồm n phần tử là số nguyên không âm, tìm phần tử có lần xuất hiện trong mảng nhiều nhất, in ra số tìm được và số lần xuất hiện trên cùng một dòng.
// Input:
// Dòng đầu tiên là n (1<=n<=100000) - số lượng số trong dãy
// Dòng thứ hai là n số trong dãy
// Output
// Số có lần xuất hiện nhiều nhất và số lần xuất hiện

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    int max_cnt = 0, cnt = 1, max_val = a[0], val = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] == val)
        {
            cnt++;
        }
        else
        {
            if (cnt > max_cnt)
            {
                max_cnt = cnt;
                max_val = val;
            }
            cnt = 1;
            val = a[i];
        }
    }
    if (cnt > max_cnt)
    {
        max_cnt = cnt;
        max_val = val;
    }
    cout << "The number that appears most frequently is " << max_val << " and it appears " << max_cnt << " times." << endl;
    return 0;
}

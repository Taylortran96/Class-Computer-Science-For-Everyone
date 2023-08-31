// Nhập vào một mảng gồm n số nguyên không âm và một số nguyên không âm x, đếm số lượng số nguyên tố cùng nhau với x trong mảng và liệt kê các số đó.
// Input:
// Dòng đầu tiên là n (1<=n<=100000) - số lượng số trong dãy
// Dòng thứ hai là n số trong dãy
// Dòng thứ 3 là số nguyên x
// Output
// Dòng đầu tiên là số lượng số nguyên tố cùng nhau với x trong mảng.
// Dòng thứ hai liệt kê các số nguyên tố cùng nhau với x.

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

bool isPrime(int n)
{
    if (n < 2)
    {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n, x;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> x;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (__gcd(a[i], x) == 1)
        {
            if (isPrime(a[i]))
            {
                cnt++;
            }
        }
    }
    cout << cnt << endl;
    for (int i = 0; i < n; i++)
    {
        if (__gcd(a[i], x) == 1)
        {
            if (isPrime(a[i]))
            {
                cout << a[i] << " ";
            }
        }
    }
    return 0;
}

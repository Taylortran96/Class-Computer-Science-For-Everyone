// Kiểm tra năm nhuận
// Năm nhuận là năm chia hết cho 400 hoặc ( chia hết cho 4 và không chia hết cho 100).
// Input
// Năm là một số nguyên. (-10^6 ≤ n ≤ 10^6)
// Output
// In ra INVALID nếu n là một số nguyên âm hoặc số 0. Nếu n là năm nhuận, in ra YES, ngược lại in ra NO

#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int year;
    cout << "Nhập year:";
    cin >> year;

    if (year <= 0)
    {
        cout << "Invalid" << endl;
        return 0;
    }

    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }

    return 0;
}
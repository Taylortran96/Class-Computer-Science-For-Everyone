// #include <iostream>
// #include <iomanip>
// #include <cmath>

// using namespace std;

// // Khai báo mảng trong cục bộ thì nguy hiểm
// int main()
// {
//     int a[5] = {2,3,4,3,4};
//     cout << a[2] << endl;
//     return 0;
// }

// #include <iostream>
// #include <iomanip>
// #include <cmath>

// using namespace std;

// int main()
// {
//     int a[10];
//     for (int i = 0; i < 5; i++)
//     {
//         cin >> a[i];
//     }
//     a[6] = 10;
//     for (int i = 0; i < 6; i++)
//     {
//         cout << a[i] << "";
//     }

//     return 0;
// }

// Nhập và tính tổng các số chẵn trong mảng
// #include <iostream>
// #include <iomanip>
// #include <cmath>

// using namespace std;

// int main()
// {
//     int n;
//     cout << "Nhập n: ";
//     cin >> n;
//     int a[n + 5];
//     cout << "Nhập mảng: " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }

//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] % 2 == 0)
//         {
//             sum += a[i];
//         }
//     }

//     cout << "Tổng các số chẵn trong mảng là: " << sum << endl;

//     return 0;
// }

// Mảng 2 chiều
// Nhập xuất cơ bản

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
// Truyền vào mảng
int sumArr(int a[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    return sum;
}
int main()
{
    int n;
    cin >> n;
    int[]
}

// Nhập ma trận số hàng 3, số cột là 2, tính tổng các số ở hàng 2
int main()
{
    int n = 3, m = 2;
    cin >> n >> m;
    int a[n][m];
    // Nhập dữ liệu cho ma trận
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    // Hiển thị ma trận
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << a[i][j] << "";
        }
        cout << endl;
    }
    // Tính tổng các số ở hàng 2
    int sum = 0;
    for (int j = 0; j < m; j++)
    {
        sum += a[1][j];
    }

    cout << "Tổng các số trong hàng 2 là: " << sum << endl;

    return 0;
}

// Nhập vào mảng số nguyên có n phần tử, tìm số lớn nhất và số lớn thứ 2 trong mảng vì in ra kết quả trên 2 dòng
// Input:
// Dòng đầu là n(2<=n <=100) - số lượng phần tử của mảng
// Dòng thứ 2 bao gồm n phần tử của mảng

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
// Cho res = rỗng, so sánh từng giá trị trong mảng
int maxArray(int a[], int n)
{
    int res = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > res)
        {
            res = a[i];
        }
    }
    return res;
}

int main()
{
    int n;
    cin >> n;
    int a[n + 5];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Max " << maxArray(a, n) << endl;
    return 0;
}
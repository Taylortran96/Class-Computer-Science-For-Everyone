// 1.Hàm:
// #include <iostream>
// #include <iomanip>
// #include <cmath>

// using namespace std;

// int main()
// {
//     int a = -10;
//     cout << max(2, 3) << endl; // hàm max

//     return 0;
// }

// 2. Biến cục bộ
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int res; // Biến toàn cục

void add(int a, int b)
{
    res = a + b;
}

int main()
{
    int x, y;
    cin >> x >> y;

    add(x, y);
    cout << res << endl;

    return 0;
}
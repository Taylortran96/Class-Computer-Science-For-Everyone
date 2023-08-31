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
// #include <iostream>
// #include <iomanip>
// #include <cmath>

// using namespace std;
// int res; // Biến toàn cục

// void add(int a, int b)
// {
//     res = a + b;
// }

// int main()
// {
//     int x, y;
//     cin >> x >> y;

//     add(x, y);
//     cout << res << endl;

//     return 0;
// }

// 3. Biến toàn cục
#include <iostream>
using namespace std;

// Variables declared outside of a block are global variables
int g_x;          // global variable g_x
const int g_y(2); // global variable g_y

void doSomething()
{
    // global variables can be seen and used everywhere in program
    g_x = 3;
    cout << g_y << "\n";
}

int main()
{
    doSomething();
    // global variables can be seen and used everywhere in program
    g_x = 5;
    cout << g_y << "\n";
    return 0;
}

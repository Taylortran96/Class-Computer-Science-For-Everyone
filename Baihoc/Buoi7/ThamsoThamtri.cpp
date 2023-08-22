#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// Tham trị - chuyển dữ liệu ở ngoài, và trong hàm không muốn thay đổi giá trị biến
void increase(int a)
{
    a++ + ;
}

// Tham chiếu reference- chuyển dữ liệu ở ngoài, và trong hàm muốn thay đổi giá trị biến
// Tham chiếu có "&"
void increaseRef(int &a)
{
    a++;
}

int main()
{
    int a = 10;
    cout << "Giá trị ban đầu: " << a << endl;
    increaseRef(a);
    cout << "Giá trị mới: " << a << endl;

    return 0;
}
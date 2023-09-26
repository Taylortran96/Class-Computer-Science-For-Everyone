// Tìm kiếm tuyến tính (Linear search)
// Tìm 1 phần tử -- duyệt qua tất cả index trong array
// dùng for

// Cách hoạt động của thuật toán tìm kiếm tuyến tính như sau:
// 1. Duyệt qua các phần tử của mảng từ đầu đến cuối.
// 2. So sánh giá trị của phần tử hiện tại với giá trị cần tìm kiếm.
// 3. Nếu giá trị của phần tử hiện tại trùng với giá trị cần tìm kiếm, trả về chỉ số của phần tử đó và kết thúc thuật toán.
// 4. Nếu không tìm thấy phần tử cần tìm kiếm sau khi duyệt qua tất cả các phần tử của mảng, trả về giá trị đại diện cho việc không tìm thấy.

// Cách 1:
#include <iostream>
using namespace std;

int LinearSearch(int arr[], int numberOfElements, int x)
{
    for (int i = 0; i < numberOfElements; i++)
    {
        if (arr[i] == x)
        {
            return i;
        }
        return -1;
    }
}

int main()
{
    int arr[] = {10, 8, 1, 21, 7, 32, 5, 11, 0};
    int size = sizeof(arr) / sizeof(arr[0]);

    int index = LinearSearch(arr, size, 5);

    if (index == -1)
    {
        cout << "Khong tim thay!" << endl;
    }
    else
    {
        cout << "Vi tri tim thay la: " << index << endl;
    }
    return 0;
}

// Cách 2: Nhập vào mảng
#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            return i;
        }
        return -1;
    }
}

int main()
{
    int n, x, result;
    do
    {
        cout << "Nhập vào số lượng phần tử của mảng: ";
        cin >> n;
        if (n <= 0)
        {
            cout << "Vui lòng nhập số lượng phần tử lớn hơn 0!!!\n";
        }

    } while (n <= 0);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Nhập vào phần tử a[" << i << "]: ";
        cin >> a[i];
    }

    cout << "Nhập giá trị x cần tìm: ";
    cin >> x;

    result = linearSearch(a, n, x);
    if (result == -1)
    {
        cout << "Không tìm thấy giá trị " << x << " trong mảng.\n";
    }
    else
    {
        cout << "Đã tìm thấy giá trị " << x << " tại vị trí index " << result;
    }
}

// Cách 3:
#include <iostream>
using namespace std;

int linearSearch(int *arr, int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            return i;
        }
        return -1;
    }
}

int main()
{
    int n = 8;
    int arr[] = {10, 8, 1, 21, 7, 32, 5, 11, 0};
    int x = 5;
    int res = linearSearch(arr, n, x);
    if (res == -1)
    {
        cout << "Không tìm thấy giá trị " << x << " trong mảng.\n";
    }
    else
    {
        cout << "Đã tìm thấy giá trị " << x << " tại vị trí index " << res;
    }
}

// Tìm kiếm nhị phân (Binary search)
#include <iostream>
using namespace std;

int binarySearch(int *arr, int n, int x)
{
    int left = 0;
    int right = n - 1;
    int mid;

    while (left <= right)
    {
        mid = left + right;

        if (arr[mid] == x)
        {
            return mid;
        }
        else if (arr[mid] > x)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
}
int main()
{
    int n = 8;
    int arr[] = {10, 8, 1, 21, 7, 32, 5, 11, 0};
    int x = 5;
    int res = binarySearch(arr, n, x);
    if (res == -1)
    {
        cout << "Không tìm thấy giá trị " << x << " trong mảng.\n";
    }
    else
    {
        cout << "Đã tìm thấy giá trị " << x << " tại vị trí index " << res;
    }
}

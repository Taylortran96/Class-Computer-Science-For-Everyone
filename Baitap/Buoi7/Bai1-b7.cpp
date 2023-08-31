// Nhập vào mảng số nguyên có n phần tử
// Tìm số lớn nhất và số lớn thứ 2 trong mảng vì in ra kết quả trên 2 dòng.
// Input:
// Dòng đầu là n (2<=n<=100) - số lượng phần tử của mảng Dòng thứ 2 bao gồm n phần tử của mảng
// Output:
// Dòng đầu tiên : Giá trị của số lớn nhất. Dòng thứ hai: Giá trị của số lớn thứ 2

// Cách 1:
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Nhập số lượng phần tử của mảng: ";
    cin >> n;

    if (n < 2 && n > 100)
    {
        cout << " n phải >= 2 và <= 100" << endl;
        return 0;
    }

    vector<int> array(n);
    cout << "Nhập số lượng phần tử của mảng: ";
    // Duyệt qua mảng
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    // Sắp xếp mảng giảm dần bằng cách sử dụng hàm `sort` với tham số `greater<int>`.
    sort(array.begin(), array.end(), greater<int>());

    int maxNumber = array[0];
    int secondMaxNumber = array[1];
    cout << "Số lớn nhất: " << maxNumber << endl;
    cout << "Số lớn thứ 2: " << secondMaxNumber << endl;

    return 0;
}

// Cách 2
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cout << "Nhập số lượng phần tử của mảng: ";
    cin >> n;

    // Dùng "for để nhập giá trị cho mỗi phần tử trong mảng `arr`.
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int max1 = arr[0];
    int max2 = arr[0];
    // Dùng "for" để để kiểm tra từng phần tử trong mảng `arr`.
    // Nếu phần tử hiện tại lớn hơn `max1`=> thì gán `max1` thành phần tử hiện tại và gán `max2` thành `max1`.
    // Nếu phần tử hiện tại lớn hơn `max2` nhưng nhỏ hơn `max1`, thì gán `max2` thành phần tử hiện tại.
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if (arr[i] > max2 && arr[i] < max1)
        {
            max2 = arr[i];
        }
    }

    cout << max1 << endl;
    cout << max2;

    return 0;
}

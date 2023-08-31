// Nhập vào mảng gồm n số nguyên, tính và in ra giá trị trung bình của các phần tử trong mảng.
// Input:
// Dòng đầu tiên là n (1<=n<=100000) - số lượng số trong dãy
// Dòng thứ hai là n số trong dãy
// Ouput
// Giá trị trung bình của các số trong mảng

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Nhập n: ";
    cin >> n;

    vector<int> arr; // arr để lưu trữ số nguyên
    cout << "Số lượng số trong dãy: ";
    for (int i = 0; i <= n; i++)
    {
        int num;
        cin >> num;
        arr.push_back(num); // thêm từng phần tử nhập vào
    }

    int sum = 0;
    for (int i = 0; i < arr.size(); i++) // arr.size(): tổng kích thước
    {
        sum += arr[i];
    }

    float average = (float)sum / n;
    cout << "Giá trị trung bình của các số trong mảng: " << average << endl;

    return 0;
}
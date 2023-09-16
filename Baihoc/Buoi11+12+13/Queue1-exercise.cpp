// Tìm số nhỏ nhất tạo ra từ số 9 và số 0 sao cho chia cho N (N là input)

#include <iostream>
#include <queue>
#include <string>

using namespace std;

string findSmallestMultiple(int N)
{
    if (N == 1)
    {
        return "0";
    }

    queue<string> q;
    q.push("9"); // Bắt đầu bằng số 9
                 // queue: 9

    while (!q.empty())
    {
        string current = q.front(); // 90
        q.pop();                    // queue: 99

        long long num = stoll(current); // Chuyển đổi chuỗi thành số nguyên

        if (num % N == 0)
        {   // Kiểm tra xem số hiện tại có chia hết cho N không
            // N = 5
            return current;
        }
        else
        {
            // Thêm số 0 và số 9 vào số hiện tại và đưa vào hàng đợi
            q.push(current + "0");
            q.push(current + "9");
        }
        // queue : 90 99
    }

    return ""; // Trả về chuỗi rỗng nếu không tìm thấy
}

int main()
{
    int N;
    cout << "Nhập N: ";
    cin >> N;

    string result = findSmallestMultiple(N);

    cout << "Số nguyên dương nhỏ nhất chia hết cho " << N << " là: " << result << endl;

    return 0;
}

// Stack: Last in first out
#include <iostream>
#include <math.h>
#include <stack>
using namespace std;

int main()
{
    stack<int> s; // Last in first out -- Thứ tự: 5,4,3,2,1
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    cout << s.top() << endl; // KQ: 5 --  lấy giá trị ở đỉnh stack

    s.pop();                 // Xóa phần tử đỉnh stack ra khỏi stack
    cout << s.top() << endl; // KQ: 4

    return 0;
}

// Queue (hàng đợi) -- First in first out (insert tail)
#include <iostream>
#include <math.h>
#include <queue>
using namespace std;

int main()
{
    queue<int> q; // First in first out -- Thứ tự: 1,2,3,4,5
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    cout << q.front() << endl; // KQ: 1 --  lấy giá trị ở đầu queue

    q.pop();                   // Xóa phần tử ở đầu queue
    cout << q.front() << endl; // KQ: 2

    return 0;
}
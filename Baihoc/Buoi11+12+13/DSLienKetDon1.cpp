#include <iostream>
#include <math.h>
using namespace std;

typedef int type;
typedef struct Node
{
    type data;
    Node *next;
} node;

node *head = NULL; // Đau ds liên kết đơn
bool isEmpty()
{
    if (head == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int length()
{
    int count = 0;
    node *ptr = head;
    cout << "Dữ liệu trong danh sách liên kết" << endl;
}

void show()
{
    node *pointer = head;
    cout << "dữ liệu trong danh sách liên kết " << endl;
    while (pointer != NULL)
    {
        cout << pointer->data << " ";
        pointer = pointer->next;
    }
    cout << endl;
};
void insertFirst(int value)
{
    node *link = new Node; // Node rỗng
    link->data = value;
    link->next = head;
    head = link; // link sẽ dc update mới
};

node *deleteFirst()
{
    node *ptr = head;
    head = head->next;
    ptr->next = NULL;
    return ptr;
}

void insert(int pos, int value)
{
    int size = length();
    if (pos > size || pos < 1)
    {
        cout << "Vị trí không hợp lệ" << endl; // Có 3 vị trị mà insert vị trí 10 => invalid
    }
    else
    {
        node *insertNode = new Node; // Tạo node rỗng
        node *tmp;                   // template dùng để di chuyển tới từng vị trí muốn insert, giống tạo rỗng, có thể reuse
        int cnt = 1;
        tmp = head;

        while (cnt != pos - 1)
        {
            cnt++;
            tmp = tmp->next;
        }
        insertNode->data = value;
        insertNode->next = tmp->next; // tmp->next: địa chỉ vị trí  cần insert
        tmp->next = insertNode;
    }
    delete[] tmp;
}

// Xóa vị trí bất kỳ
void deleteNote(int pos)
{
    int size = length();
    if (pos > size || pos < 1)
    {
        cout << "Vị trí không hợp lệ" << endl;
    }
    else if (pos == 1)
    {
        deleteFirst();
    }
    else
    {
        node *tmp = head;
        node *ptr;
        int cnt = 1;
        tmp = head;

        while (cnt != pos - 1)
        {
            cnt++;
            tmp = tmp->next;
        }
        ptr = tmp->next;
        ptr = ptr->next;
        tmp->next = ptr;
    }
}

int main()
{
    insertFirst(1);
    insertFirst(2);
    insertFirst(3);
    insertFirst(4);
    insertFirst(5);
    cout << s.top() << endl; // KQ: 5 --  lấy giá trị ở đỉnh stack

    s.pop();                 // Xóa phần tử đỉnh stack ra khỏi stack
    cout << s.top() << endl; // KQ: 4

    insertFirst(1);
    insertFirst(2);
    deleteFirst();
    insertFirst(10);
    show();

    // if(isEmpty()){
    //     cout << "Ds liên kết rỗng " << endl;
    // }else{
    //     cout << " Ds có dữ liệu"<< endl;
    // }

    cout << length() << endl;

    return 0;
}


int main()
{
    // int x = 10;
    // int *prt = &x; //gán  giá trị của ptr bằng địa chỉ của x
    // int *a = &x;
    // ptr: in giá trị của ptr (tức là giá trị của x)
    //*ptr: thực hiện in ra giá trị mà địa chỉ đang nắm giữ
    // cout << &x << "\t" <<prt << endl; //& là in ra địa chỉ
    // cout << &x << "\t" <<*prt << endl; //& là in ra địa chỉ

    // x++;
    // cout << &x << "\t" <<*prt << endl;
    // {*prt}++;
    // cout << &x << "\t" <<*prt << endl;

    // {*a}++;
    // cout << x << "\t" << ptr <<"\t" << *a << endl;

    int *ptr = nullptr;
    int a[] = {1, 2, 3, 4, 5};

    // for (int i = 0; i <5; i++) {
    //     ptr = &a[i]
    //     cout << *ptr << endl; //*ptr = in ra value của con trỏ dẫn tới là mảng a[i]
    // }
    // ptr = &a[0];
    // cout << *{ptr + 2} << endl; //KQ: 3 -- bộ nhớ là int = 4 byte
    // for (int i = 0; i <5; i++) {
    //     cout << *{ptr + i} << endl;
    // }

    // delete //giải phóng bộ nhớ khi khai báo

    // Dùng con trỏ để thực hiện nhập mảng
    int *ptr = nullptr;
    int a[5];
    ptr = &a[0];
    for (int i = 0; i < 5; i++)
    {
        cout << "Nhập giá trị cho a[" << i << "]: ";
        cin >> *(ptr + i);
    }

    return 0;
}

// Cho địa chỉ của biến n trong bộ nhớ là 2048, chương trình sau có kết quả là gì?
// Bài 1:
#include <stdio.h>

int main()
{
    int n = 100;
    int *ptr1 = &n;
    printf("%d", ptr1);
    printf("%d\n", *ptr1);
}
// B. 2048.100

// Kết quả:
#include <stdio.h>

// Bài 2:
int main()
{
    int n = 100;
    int *ptr1 = &n;   // ptr1 = 100
    int *ptr2 = ptr1; // ptr2 = 100
    *ptr2 = 200;
    *ptr1 = 500; // gán lại
    printf("%d %d %d ", n, *ptr1, *ptr2);
}
// KQ: 500 500 500 => trỏ cùng 1 địa chỉ n

// Bài 3:
#include <stdio.h>

void change(int *x)
{
    printf("%d ", x);
    *x = 20;
}

int main()
{
    int n = 100;
    change(&n);
    printf("%d ", n);
}

// KQ: 2048 20

// Bài 4:
#include <stdio.h>

int main()
{
    int n = 100;
    int *ptr1 = &n;    // ptr1 = 100
    int *ptr2 = *ptr1; // ptr2 = 100
    int *ptr3 = *ptr2; // lỗi ở đây
    *ptr3 = 20;
    printf("%d ", n);
}
// KQ: lỗi biên dịch do con trỏ lưu địa chỉ chứ ko lưu giá trị

// Bài 5:
#include <stdio.h>

int main()
{
    int n = 100;
    int *ptr1 = &n;     // ptr1 = 100
    int **ptr2 = &ptr1; //*ptr2 chứa địa chỉ ptr1 và
    printf("%d %d %d", *ptr1, *ptr2, **ptr2);
}
// Giá trị của n; giá trị của con trỏ ptr1, giá trị của n
//**ptr2: là giá trị của biến `n`, được truy xuất thông qua con trỏ `ptr1` mà con trỏ `ptr2` đang trỏ đến.
// con trỏ `ptr2` là một con trỏ trỏ đến một con trỏ (`ptr1`). Do đó, khi sử dụng toán tử `*` hai lần để truy xuất giá trị tại địa chỉ của `ptr1`, chúng ta thu được giá trị của biến `n` mà `ptr1` đang trỏ tới.
//=> `**ptr2` cho phép ta truy xuất giá trị của một biến thông qua một con trỏ trỏ đến một con trỏ khác, trong đó con trỏ đầu tiên trỏ tới con trỏ thứ hai, và con trỏ thứ hai trỏ tới biến cần truy xuất giá trị.
// Phân biệt giữa giá trị và địa chỉ
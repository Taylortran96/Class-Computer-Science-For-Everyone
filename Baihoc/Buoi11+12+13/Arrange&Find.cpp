// Sắp xếp
// Có nhiều bài toán sort agorthim

#include <iostream>
#include <math.h>

using namespace std;

// 1. Bubble sort (nổi bọt)-- Tốc độ O(n^2)
void bubbleSort(int *a, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                // int tmp = a[j]; //tmp = biến tạm
                // a[j] = a[j+1];
                // a[j+1] = tmp;
                // hoặc
                swap(a[j], a[j + 1]);
            }
        }
    }
};

// 2. Selection sort (chọn)-- Tốc độ O(n^2): lọc mảng, chọn số có giá trị bé nhất ở trong mảng, chuyển lên vị trí đầu tiên của mảng
void selectionSort(int *a, int *n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = i; // tạm thời xem a[i] là giá trị nhỏ nhất
        for (int j = i + 1; j < n - 1; j++)
        {
            if (a[min] > a[j])
            {            // nếu a[j] < a[min] thì cập nhật giá trị min mới
                min = j; // lưu lại vị trí min mới
            }
            swap(a[i], a[min]);
        }
    }
}

// 3. Insertion Sort (chèn) -- Tốc độ O(n^2)
void insertionSort(int a[], int n)
{
    int pos, x;
    for (int i = 1; i < n; i++)
    {             // so sánh với phần tử thứ 1 chứ không phải 0
        x = a[i]; // lưu lại giá trị của x tránh bị ghi đè khi dịch chuyển các phần tử
        pos = i - 1;

        // Tìm vị trí thích hợp để chèn thêm giá trị x
        while (pos >= 0 && a[pos] > x)
        {
            a[pos + 1] = a[pos]; // dịch chuyển phần tử từ phải sang để chứa chỗ cho x chèn
            pos--;
        }
        a[pos + 1] = x; // chèn vào vị trí đã tìm dc
    }
}

// 4. Merge sort -- tốc độ:O(NLog(N)): chia đôi ra, từng phần con sắp xếp, sau đó merge lại
// dùng phương pháp đệ quy (chia để trị) -- không có điểm dừng, dễ bị tràn stack => cần có điều kiện để tạo điểm dừng

// Merge: so sánh cuối cùng ở 2 mảng(Left và Right)
void merge(int *a, int l, int r, int m)
{
    int i, j, k;
    int n1 = m - l + 1; // n1: size của mảng trái
    int n2 = r - m;     // n2: size của mảng phải

    int L[n1], R[n2];

    // Gán dữ liệu vào 2 mảng trái (L) và phải (R)
    for (i = 0; i < n1; i++)
    {
        L[i] = a[l + 1];
    }
    for (j = 0; i < n2; j++)
    {
        R[j] = a[m + l + j];
    }
    i = 0; // index của mảng L
    j = 0; // index của mảng R
    k = l; // index của mảng sau khi được merge (index của mảng a)

    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            a[k] = L[i];
            i++;
        }
        else
        {
            a[k] = R[j];
            j++;
        }
        k++;
    }
    // Copy tất cả phần tử bên trái của mảng mà chưa được duyệt hết
    while (i < n1)
    {
        a[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        a[k] = R[j];
        i++;
        k++;
    }
}
// hàm mergeSort gọi lại chính nó => giống vòng lặp
void mergeSort(int *a, int l, int r)
{ // l: left, r: right
    if (l < r)
    { // l < r là điểm dừng đệ quy
        int m = (r + l) / 2;
        mergeSort(a, m, l);
        mergeSort(a, m + 1, r);
        merge(a, l, m, r);
    }
}

// 5. Quick sort (sắp xếp nhanh)
void quickSort(int *a, int left, int right)
{
    int i = left;
    int j = right;
    int tmp;
    int pivot = a[(left + right) / 2];

    while (i <= j)
    {
        while (a[i] < pivot)
        {
            i++;
        }
        while (a[j] > pivot)
        {
            j--;
        }
        if (i <= j)
        {
            tmp = a[i];
            a[i] = a[j];
            a[j] = tmp;
            i++;
            j--;
        }
    }
    if (left < j)
    {
        quickSort(a, left, j);
    }
    if (i < right)
    {
        quickSort(a, j, right);
    }
}

int main()
{
    int n = 8;
    int a[] = {4, 11, 1, 2, 5, 3, 5, 9};
    // bubbleSort(a,n);
    // selectionSort (a,n);
    // insertionSort (a,n);
    mergeSort(a, 0, n);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "";
    }

    return 0;
}

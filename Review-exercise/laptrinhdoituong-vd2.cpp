// Xây dựng lớp vận động viên VanDongVien gồm:
// Thuộc tính: hoten (chuỗi ký tự), tuoi (số nguyên), monthidau (chuỗi ký tự), cannang (số thực), chieucao (số thực).
// Phương thức:
// Thiết lập không tham số.
// Thiết lập 5 tham số
// Hủy bỏ
// Nạp chồng toán tử nhập >>
// Nạp chồng toán tử xuất <<
// Nạp chồng toán tử so sánh > (một vận động viên là lớn hơn nếu chiều cao lớn hơn, trong trường hợp chiều cao bằng nhau thì xét cân nặng lớn hơn)

// Xây dựng chương trình chính:
// Khai báo p là đối tượng lớp Vandongvien (sử dụng hàm thiết lập 5 tham số), hiển thị thông tin của p ra màn hình.
// Nhập vào một mảng gồm n vận động viên.
// Hiển thị danh sách đã nhập ra màn hình.
// Sắp xếp mảng đã nhập theo thứ tự tăng dần, hiển thị danh sách đã sắp ra màn hình.

#include <bits/stdc++.h>
using namespace std;

class VanDongVien
{
protected:
    string hoten, monthidau;
    int tuoi;
    float cannang, chieucao;

public:
    VanDongVien()
    {
        this->hoten = this->monthidau = "";
        this->tuoi = 0;
        this->cannang = this->chieucao = 0;
    }

    VanDongVien(string hoten, string monthidau, int tuoi, float cannang, float chieucao)
    {
        this->hoten = hoten;
        this->monthidau = monthidau;
        this->tuoi = tuoi;
        this->cannang = cannang;
        this->chieucao = chieucao;
    }
    ~VanDongVien()
    {
        this->hoten = this->monthidau = "";
        this->tuoi = 0;
        this->cannang = this->chieucao = 0;
    }
    //----------------------------------------------//
    friend istream &operator>>(istream &is, VanDongVien &obj)
    {
        cin.ignore();
        cout << "Nhap Ho Ten: ";
        fflush(stdin);
        getline(is, obj.hoten);
        cout << "Nhap Mon Thi Dau: ";
        fflush(stdin);
        getline(is, obj.monthidau);
        cout << "Nhap Tuoi: ";
        is >> obj.tuoi;
        cout << "Nhap Can Nang: ";
        is >> obj.cannang;
        cout << "Nhap Chieu Cao: ";
        is >> obj.chieucao;
        return is;
    }

    friend ostream &operator<<(ostream &os, VanDongVien obj)
    {
        cout << "Ho Ten: " << obj.hoten << endl;
        cout << "Mon Thi Dau: " << obj.monthidau << endl;
        cout << "Tuoi: " << obj.tuoi << endl;
        cout << "Can Nang: " << obj.cannang << endl;
        cout << "Chieu cao: " << obj.chieucao << endl;
        return os;
    }

    bool operator>(const VanDongVien &obj)
    {
        if (this->chieucao > obj.chieucao)
            return true;
        else if (this->chieucao < obj.chieucao)
            return false;
        else if (this->cannang > obj.cannang)
            return true;
        else
            return false;
    }
};

void swap(VanDongVien &a, VanDongVien &b)
{
    VanDongVien temp = a;
    a = b;
    b = temp;
}

void Bubblesort(VanDongVien arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
}

int main()
{
    VanDongVien p("Nguyen Van A", "Bong Da", 20, 178, 70.5);
    cout << p;

    cout << "Nhap So Luong: ";
    int n;
    cin >> n;
    VanDongVien *arr = new VanDongVien[n];

    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    cout << endl
         << endl;
    for (int i = 0; i < n; ++i)
        cout << arr[i] << endl;

    cout << "Sort" << endl;
    Bubblesort(arr, n);
    for (int i = 0; i < n; ++i)
        cout << arr[i] << endl;

    return 0;
}
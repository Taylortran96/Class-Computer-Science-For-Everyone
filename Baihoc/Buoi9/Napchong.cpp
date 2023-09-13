// Nạp chồng: lấy logic mới đè lên logic cũ
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Lecturer;

class Student
{
private:
    string stdID;
    int finalScore = 9;

public:
    Student()
    {
        this->stdID = "01";
        this->finalScore = 9;
    }
    void setStdID()
    {
        cout << "Nhập mã sinh viên: ";
        fflush(stdin);
        getline(cin, this->stdID);
    }
    friend void getInfor(Student std, Lecturer lec);

    friend class Lecturer;
};

class Lecturer
{
private:
    string lecID;
    string subject;

public:
    Lecturer()
    {
        this->lecID = "01";
        this->subject = "Toán";
    }
    friend void getInfor(Student std, Lecturer lec);

    void getInforStd(Student std)
    {
        cout << std.stdID << "\t" << std.finalScore << endl;
    }
};
void getInfor(Student std, Lecturer lec)
{
    std.finalScore = 8;  // Thay đổi thông tin
    lec.lecID = "Mindx"; // Thay đổi thông tin
    cout << std.stdID << "\t" << std.finalScore << "\t" << lec.lecID << "\t" << lec.subject << endl;
}

class phanso
{
private:
    int tu, mau;

public:
    phanso()
    {
        tu = mau = 0;
    }
    phanso(int tu, int mau)
    {
        this->tu = tu;
        this->mau = mau;
    }
    ~phanso()
    {
        tu = mau = 0;
    }
    // void input()
    // {
    //     cout << "Nhap tu so: ";
    //     cin >> this->tu;
    //     cout << "Nhap mau so: ";
    //     cin >> this->mau;
    // }

    // istream và ostream là thư viện của C++
    friend istream &operator>>(istream &is, phanso &a)
    {
        cout << "Nhap tu so: ";
        is >> a.tu;
        cout << "Nhap mau so: ";
        is >> a.mau;

        return is;
    }

    friend ostream &operator<<(ostream &os, phanso &a)
    {
        os << a.tu << "/" << a.mau << endl;
        return os;
    }

    void output()
    {
        cout << this->tu << "\t" << this->mau << endl;
    }

    phanso operator+(phanso a) // operator + cho phần tử muốn chồng
    {
        return phanso(this->tu + this->mau + a.tu, this->mau + a.mau);
    }

    phanso operator-(phanso a)
    {
        return phanso(this->tu + a.mau - this->mau + a.tu, this->mau + a.mau);
    }
};

int main()
{
    phanso a(1, 2), b(2, 3);
    phanso c = a + b;
    cin >> a >> b;

    c = a + b;
    c.output();

    c = a - b;
    c.output();

    return 0;
}
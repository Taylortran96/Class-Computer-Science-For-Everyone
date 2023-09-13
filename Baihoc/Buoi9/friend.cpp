#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Tạo class Lecturer
class Lecturer;

// Student class
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
    friend void getInfor(Student std, Lecturer lec); // cho phép getInfor truy cập vào các thành phần private của cả hai class Student và Lecturer-- Khai báo ở 2 class Student và Lecturer

    friend class Lecturer;
};

// Lecturer class
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
    friend void getInfor(Student std, Lecturer lec); // cho phép getInfor truy cập vào các thành phần private của cả hai class Student và Lecturer-- Khai báo ở 2 class Student và Lecturer

    void getInforStd(Student std)
    {
        cout << std.stdID << "\t" << std.finalScore << endl;
    }
};
// Thông tin thay đổi trong hàm bạn
void getInfor(Student std, Lecturer lec) // thay đổi thông tin cho thuộc tính finalScore của class Student và thuộc tính lecID của class Lecturer.
{
    std.finalScore = 8;  // Thay đổi thông tin
    lec.lecID = "Mindx"; // Thay đổi thông tin
    cout << std.stdID << "\t" << std.finalScore << "\t" << lec.lecID << "\t" << lec.subject << endl;
}

int main()
{
    Student std;
    Lecturer lec;

    getInfor(std, lec);

    return 0;
}
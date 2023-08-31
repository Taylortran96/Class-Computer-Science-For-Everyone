// Tính trù tượng:
// Tính đóng gói (Access modifier): che dấu dữ liệu (dữ liệu cá nhân)
// Tính đa hình
// Tính kế thừa

// Phạm vi: gồm private, public, protected
// Thuộc tính:
// Phương thức:

// Hàm khởi tạo: khởi tạo k có tham số; khởi tạo có tham số và khởi tạo sao chép
// Hàm hủy: xóa đi những biến k cần thiết để có thêm bộ nhớ

// Phân số
#include <iostream>
using namespace std;

class phanso
{
private:
    int tuso;
    int mauso;

public:
    phanso()
    {
        this->tuso = 0;
        this->mauso = 1;
        cout << "Khởi tạo" << endl;
    }
    phanso(int tuso, int mauso)
    {
        this->tuso = mauso;
        this->mauso = mauso;
        cout << "Khởi tạo" << endl;
    }

    ~phanso()
    {
        cout << "huy" << endl;
    }

    phanso cong(const phanso &other, const phanso)
    {
        int resulttu = tuso * other.mauso + other.tuso * mauso;
        int resultmauso = mauso * other.mauso;
        return phanso(resulttu, resultmauso);
    }
    phanso tru(const phanso &other)
    {
        int resulttu = tuso * other.mauso - other.tuso * mauso;
        int resultmauso = mauso * other.mauso;
        return phanso(resulttu, resultmauso);
    }
    phanso nhan(const phanso &other)
    {
        int resulttu = tuso * other.mauso - other.tuso * mauso;
        int resultmauso = mauso * other.mauso;
        return phanso(resulttu, resultmauso);
    }
    phanso chia(const phanso &other)
    {
        int resulttu = tuso * other.mauso;
        int resultmauso = mauso * other.tuso;
        return phanso(resulttu, resultmauso);
    }

    void display()
    {
        cout << tuso << "/" << mauso;
    }
};

int main()
{
    // phanso so1(3, 4);
    // phanso so2(1, 2);

    // phanso sum = so1.cong(so2);
    // cout << "Tổng 2 phân số: ";
    // sum.display();
    // cout << endl;

    // phanso differ = so1.tru(so2);
    // cout << "Hiệu của 2 số: ";
    // differ.display();
    // cout << endl;

    // phanso product = so1.nhan(so2);
    // cout << "Tích của 2 số: ";
    // product.display();
    // cout << endl;

    // phanso divide = so1.chia(so2);
    // cout << "Thương của 2 số: ";
    // divide.display();
    // cout << endl;

    // Không truyền tham số
    // phanso a();
    // a.display();

    // Có truyền tham số
    // phanso a(3, 4);
    // a.display();

    return 0;
}
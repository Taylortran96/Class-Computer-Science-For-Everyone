#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class SoPhuc
{
private:
    double phanthuc;
    double phanao;

public:
    // 1. Khởi tạo không có tham số
    SoPhuc() : phanthuc(0.0), phanao(0.0) {}
    // 2.Khởi tạo có 2 tham số
    SoPhuc(double phanthuc, double phanao)
    {
        this->phanthuc = phanthuc;
        this->phanao = phanao;
        cout << "Khởi tạo" << endl;
    }

    // 3, Lấy phần thực
    double getPhanThuc() const
    {
        return phanthuc;
    }

    // 4. Lấy phần ảo
    double getPhanAo() const
    {
        return phanao;
    }

    // 5.Cộng 2 số phức
    SoPhuc add(const SoPhuc &other) const
    {
        double resultPhanThuc = phanthuc + other.phanthuc;
        double resultPhanAo = phanao + other.phanao;
        return SoPhuc(resultPhanThuc, resultPhanAo);
    }
    // 6.Trừ 2 số phức
    SoPhuc minus(const SoPhuc &other) const
    {
        double resultPhanThuc = phanthuc - other.phanthuc;
        double resultPhanAo = phanao - other.phanao;
        return SoPhuc(resultPhanThuc, resultPhanAo);
    }
    // 7.Nhân 2 số phức
    SoPhuc multiply(const SoPhuc &other) const
    {
        double resultPhanThuc = (phanthuc * other.phanthuc) - (phanao * other.phanao);
        double resultPhanAo = (phanthuc * other.phanthuc) + (phanao * other.phanao);
        return SoPhuc(resultPhanThuc, resultPhanAo);
    }

    void display() const
    {
        cout << phanao;
        if (phanao >= 0)
        {
            cout << "+" << phanao << "i";
        }
        else
        {
            cout << " - " << -phanao << "i";
        }
        cout << endl;
    }
    ~SoPhuc()
    {
        cout << "hủy" << endl;
    }
};

int main()
{
    SoPhuc sp1(2.1, 3.0);
    SoPhuc sp2(3.0, -2.1);
    sp2.display();

    SoPhuc sum = sp1.add(sp2);
    cout << "Tổng 2 số phức";
    sum.display();

    SoPhuc minus = sp1.minus(sp2);
    cout << "Hiệu 2 số phức";
    minus.display();

    SoPhuc product = sp1.multiply(sp2);
    cout << "Tích 2 số phức";
    product.display();

    return 0;
}
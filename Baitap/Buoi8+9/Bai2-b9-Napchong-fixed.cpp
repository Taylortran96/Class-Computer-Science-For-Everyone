// Nạp chồng toán tử - Số phức
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

    // 3. Lấy phần thực
    double getPhanThuc() const
    {
        return phanthuc;
    }

    // 4. Lấy phần ảo
    double getPhanAo() const
    {
        return phanao;
    }

    // Nạp chồng toán tử cộng (+)
    SoPhuc operator+(const SoPhuc &other) const
    {
        double resultPhanThuc = phanthuc + other.phanthuc;
        double resultPhanAo = phanao + other.phanao;
        return SoPhuc(resultPhanThuc, resultPhanAo);
    }
    // Nạp chồng toán tử trừ (-)
    SoPhuc operator-(const SoPhuc &other) const
    {
        double resultPhanThuc = phanthuc - other.phanthuc;
        double resultPhanAo = phanao - other.phanao;
        return SoPhuc(resultPhanThuc, resultPhanAo);
    }
    // Nạp chồng toán tử nhân (*)
    SoPhuc operator*(const SoPhuc &other) const
    {
        double resultPhanThuc = (phanthuc * other.phanthuc) - (phanao * other.phanao);
        double resultPhanAo = (phanthuc * other.phanthuc) + (phanao * other.phanao);
        return SoPhuc(resultPhanThuc, resultPhanAo);
    }

    // Nạp chồng toán tử
    SoPhuc &operator=(const SoPhuc &other)
    {
        if (this != other)
        {
            phanthuc = other.phanthuc;
            phanao = other.phanao;
        }
        return *this;
    }

    friend ostream &operator<<(ostream &os, const SoPhuc c)
    {
        os << c.phanao;
        if (c.phanao >= 0)
        {
            os << "+" << c.phanao << "i";
        }
        else
        {
            os << " - " << c.- phanao << "i";
        }
        os << endl;
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

    // Sử dụng toán tử cộng (+)
    SoPhuc c = sp1 + sp2;
    cout << "Tổng 2 số phức: " << c << "\n";

    // Sử dụng toán tử trừ (-)
    SoPhuc d = sp1 - sp2;
    cout << "Hiệu 2 số phức: " << c << "\n";

    // Sử dụng toán tử nhân (*)
    SoPhuc e = sp1 * sp2;
    cout << "Tích 2 số phức: " << c << "\n";
}

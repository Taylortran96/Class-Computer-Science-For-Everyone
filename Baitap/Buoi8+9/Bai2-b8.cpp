// Lập trình một lớp số phức có các phương thức  sau:
// 1. Phương thức khởi tạo không tham số.
#include <iostream>
using namespace std;

class SoPhuc
{
private:
    float phanThuc, phanAo;

public:
    SoPhuc()
    {
        phanThuc = 0;
        phanAo = 0;
    }
};

int main()
{
    SoPhuc sp;
    return 0;
}

// 2. Phương thức khởi tạo có hai tham số.
#include <iostream>
using namespace std;

class SoPhuc
{
private:
    float phanThuc, phanAo;

public:
    SoPhuc(float a, float b)
    {
        phanThuc = a;
        phanAo = b;
    }
};

int main()
{
    SoPhuc sp(2, 3);
    return 0;
}

// 3. Phương thức lấy phần thực.
// 4. Phương thức lấy phần ảo.
// 5. Phương thức cộng, trừ, nhân, hai số phức.

#include <iostream>
using namespace std;

class SoPhuc
{
private:
    float phanThuc, phanAo;

public:
    SoPhuc()
    {
        phanThuc = 0;
        phanAo = 0;
    }
    SoPhuc(float a, float b)
    {
        phanThuc = a;
        phanAo = b;
    }
    float layPhanThuc()
    {
        return phanThuc;
    }
    float layPhanAo()
    {
        return phanAo;
    }
    SoPhuc operator+(SoPhuc const &obj)
    {
        SoPhuc ketqua;
        ketqua.phanThuc = phanThuc + obj.phanThuc;
        ketqua.phanAo = phanAo + obj.phanAo;
        return ketqua;
    }
    SoPhuc operator-(SoPhuc const &obj)
    {
        SoPhuc ketqua;
        ketqua.phanThuc = phanThuc - obj.phanThuc;
        ketqua.phanAo = phanAo - obj.phanAo;
        return ketqua;
    }
    SoPhuc operator*(SoPhuc const &obj)
    {
        SoPhuc ketqua;
        ketqua.phanThuc = (phanThuc * obj.phanThuc) - (phanAo * obj.phanAo);
        ketqua.phanAo = (phanThuc * obj.phanAo) + (phanAo * obj.phanThuc);
        return ketqua;
    }
};

int main()
{
    SoPhuc sp1(2, 3), sp2(4, 5);
    SoPhuc sp3 = sp1 + sp2;
    SoPhuc sp4 = sp1 - sp2;
    SoPhuc sp5 = sp1 * sp2;

    cout << "Số phức 1: " << sp1.layPhanThuc() << " + " << sp1.layPhanAo() << "i" << endl;
    cout << "Số phức 2: " << sp2.layPhanThuc() << " + " << sp2.layPhanAo() << "i" << endl;

    cout << "Tổng hai số phức: " << sp3.layPhanThuc() << " + " << sp3.layPhanAo() << "i" << endl;
    cout << "Hiệu hai số phức: " << sp4.layPhanThuc() << " + " << sp4.layPhanAo() << "i" << endl;
    cout << "Tích hai số phức: " << sp5.layPhanThuc() << " + " << sp5.layPhanAo() << "i" << endl;

    return 0;
}

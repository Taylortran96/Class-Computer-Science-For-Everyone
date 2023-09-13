// Lập trình một lớp ma trận có các phương thức sau:
// 1. Phương thức khởi tạo không tham số.
#include <iostream>
using namespace std;

class Matrix1
{
private:
    int row, col;
    double **data; // Mảng hai chiều để lưu trữ các phần tử của ma trận

public:
    Matrix1()
    {
        row = 0;
        col = 0;
        data = nullptr;
    }
};

int main()
{
    Matrix1 matrix1;
    return 0;
}

// 2. Phương thức khởi tạo có tham số.
#include <iostream>
using namespace std;

class Matrix2
{
private:
    int row, col;
    double **data;

public:
    Matrix2(int r, int c)
    {
        row = r;
        col = c;

        data = new double *[row];
        for (int i = 0; i < row; i++)
        {
            data[i] = new int[col];
            for (int j = 0; j < col; j++)
            {
                data[i][j] = 0;
            }
        }
    }
};

int main()
{
    Matrix2 matrix2(2, 3);
    return 0;
}

// 3. Phương thức lấy số hàng của ma trận.
// 4. Phương thức lấy số cột của ma trận.

#include <iostream>
using namespace std;

class Matrix3
{
private:
    int row, col;
    double **data;

public:
    Matrix3()
    {
        row = 0;
        col = 0;
        data = nullptr;
    }

    Matrix3(int r, int c)
    {
        row = r;
        col = c;

        data = new double *[row];
        for (int i = 0; i < row; i++)
        {
            data[i] = new int[col];
            for (int j = 0; j < col; j++)
            {
                data[i][j] = 0;
            }
        }
    }
    // Hàm Hủy
    ~Matrix3()
    {
        if (data != nullptr)
        {
            for (int i = 0; i < row; i++)
            {
                delete[] data[i];
            }
            delete[] data;
        }
    }

    int getRows()
    {
        return row;
    }
    int getCols()
    {
        return col;
    }

    // 5. Phương thức cộng hai ma trận.
    Matrix3 add(Matrix3 B)
    {
        if (row != B.getRows() || col != B.getCols())
        {
            // throw an exception or return an error message
        }
        Matrix3 C(row, col);
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                C.data[i][j] = data[i][j] + B.data[i][j];
            }
        }
        return C;
    }
    // 6. Phương thức nhân hai ma trận.
    Matrix3 multiply(Matrix3 &B)
    {
        if (col != B.getRows())
        {
            Matrix3 C(0, 0);
            return C;
        }

        Matrix3 C(row, B.getCols());
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < B.getCols(); j++)
            {
                C.data[i][j] = 0;
                for (int k = 0; k < col; k++)
                {
                    C.data[i][j] += data[i][k] * B.data[k][j];
                }
            }
        }
        return C;
    }
};

// In ra màn hình
int main()
{
    Matrix3 A(3, 4);
    cout << "Số hàng trong ma trận: " << A.getRows() << endl;
    cout << "Số cột trong ma trận: " << A.getCols() << endl;

    Matrix3 B(5, 6);
    Matrix3 C = A.add(B); // cộng matrix A và B
    cout << "Số hàng trong ma trận C: " << C.getRows() << endl;
    cout << "Số cột trong ma trận C: " << C.getCols() << endl;

    Matrix3 D = A.multiply(B); // nhân matrix A vs B
    cout << "Số hàng trong ma trận D: " << D.getRows() << endl;
    cout << "Số cột trong ma trận D: " << D.getCols() << endl;

    return 0;
}

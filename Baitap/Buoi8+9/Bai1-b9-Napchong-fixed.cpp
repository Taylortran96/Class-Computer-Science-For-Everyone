// Nạp chồng toán tử- Ma trận
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class MaTran
{
private:
    int **matrix;
    int rows;
    int columns;

public:
    // 1. Khởi tạo không tham số
    MaTran() : matrix(nullptr), rows(0), columns(0) {}

    // 2. Khởi tạo có tham số
    MaTran(int rows, int columns)
    {
        this->rows = rows;
        this->columns = columns;
        cout << "Khởi tạo" << endl;

        // Cấp phát không gian ma trận
        matrix = new int *[rows];
        for (int i = 0; i < rows; i++)
        {
            matrix[i] = new int[columns];

            // Khởi tạo giá trị mặc định cho các phần tử ma trận
            for (int j = 0; j < columns; j++)
            {
                matrix[i][j] = 0;
            }
        }
    }
    // Hàm hủy
    ~MaTran()
    {
        for (int i = 0; i < rows; i++)
        {
            delete[] matrix[i];
        }
        delete[] matrix;
    }

    // 3.Lấy số hàng của ma trận
    int getRows() const
    {
        return rows;
    }

    // 4.Lấy số cột của ma trận
    int getColumns() const
    {
        return columns;
    }

    friend istream &operator>>(istream &is, MaTran &obj)
    {
        cout << "Nhập số hàng trong ma trận:";
        is >> obj.rows;
        cout << "Nhập số cột trong ma trận:";
        is >> obj.columns;
        // Cấp phát ma trận
        obj.matrix = new int *[obj.rows];
        for (int i = 0; i < obj.rows; i++)
        {
            obj.matrix[i] = new int[obj.columns];
        }
        for (int i = 0; i < obj.rows; i++)
        {
            for (int j = 0; j < obj.columns; j++)
            {
                cout << "Nhập phần tử thứ [" << i << "] [" << j << "]: ";
                is >> obj.matrix[i][j];
            }
        }

        return is;
    }
}
// 5. Cộng 2 ma trận
MaTran
operator+(const MaTran &other) const
{
    // Điều kiện Kiểm tra
    if (rows != other.getRows() || columns != other.getColumns())
    {
        cout << " Không thể nhân 2 ma trận có số cột của ma trận thứ nhất khác số hàng của ma trận thứ hai" << endl;
    }

    // Công thức cộng ma trận
    MaTran result(rows, columns);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < other.getColumns(); j++)
        {
            result.matrix[i][j] = matrix[i][j] + other.matrix[i][j];
        }
    }
    return result;
}

// 6. Nhân 2 ma trận
MaTran operator*(const MaTran &other) const
{
    // Điều kiện Kiểm tra
    if (rows != other.getRows() || columns != other.getColumns())
    {
        cout << " Không thể cộng 2 ma trận có kích thước khác nhau" << endl;
    }

    // Công thức nhân ma trận
    MaTran result(rows, columns);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < other.getColumns(); j++)
        {
            result.matrix[i][j] = 0; // Cấp phát giá trị mặc định cho mảng
            for (int k = 0; k < columns; k++)
            {
                result.matrix[i][j] += matrix[i][k] * other.matrix[k][j];
            }
        }
    }
    return result;
}

MaTran operator=(const MaTran &other)
{
    if (this != other)
    {
        // Xóa dữ liệu hiện tại
        for (int i = 0; i < rows; i++)
        {
            delete[] matrix[i];
        }
        delete[] matrix;

        // Cấp phát lại bộ nhớ
        rows = other.rows;
        columns = other.columns;
        matrix = new int *[rows];
        for (int i = 0; i < rows; i++)
        {
            matrix[i] = new int[columns];
            // Khởi tạo giá trị mặc định cho các phần tử ma trận
            for (int j = 0; j < columns; j++)
            {
                matrix[i][j] = other.matrix[i][j];
            }
        }
    }
    return *this;
}

// Toán tử truy cập phần tử của ma trận
int *operator[](int index)
{
    return matrix[index];
}

// Hiển thị
friend ostream &operator<<(ostream &os, MaTran obj)
{
    for (int i = 0; i < obj.rows; i++)
    {
        for (int j = 0; j < obj.columns; j++)
        {
            os << obj.matrix[i][j] << " ";
        }
        os << "\n";
    }
};

int main()
{
    // MaTran a(2, 2);
    // a[0][0] = 1;
    // a[0][1] = 2;
    // a[1][0] = 3;
    // a[1][1] = 4;

    // MaTran b(2, 2);
    // a[0][0] = 5;
    // a[0][1] = 6;
    // a[1][0] = 7;
    // a[1][1] = 8;

    // //Cộng 2 ma trận
    // MaTran c = a + b;
    // cout << "Tổng 2 ma trận: \n";
    // for(int i = 0; i < c.getRows(); i++){
    //     for (int j = 0; j < c.getColumns(); j++){
    //         cout << c[i][j] << " ";
    //     }
    //     cout << "\n";
    // }
    // //Nhân 2 ma trận
    // MaTran d = a * b;
    // cout << "Tích 2 ma trận: \n";
    // for(int i = 0; i < d.getRows(); i++){
    //     for (int j = 0; j < c.getColumns(); j++){
    //         cout << c[i][j] << " ";
    //     }
    //     cout << "\n";
    // }

    MaTran a;
    MaTran b;

    cout << "Nhập ma trận a: \n";
    cin >> a;
    cout << "Nhập ma trận b: \n";
    cin >> b;
    // Cộng 2 ma trận
    MaTran c = a + b;
    cout << "Tổng 2 ma trận: \n";
    cout << c;

    // Nhân 2 ma trận
    MaTran d = a * b;
    cout << "Tích 2 ma trận: \n";
    cout << d;

    return 0;
}
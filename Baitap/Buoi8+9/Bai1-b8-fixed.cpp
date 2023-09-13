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

    void nhap()
    {
        cout << "Nhập các phần tử trong ma trận:" << endl;
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                cout << "Nhập phần tử thứ [" << i << "] [" << j << "]: ";
                cin >> matrix[i][j];
            }
        }
    }
    // 5. Cộng 2 ma trận
    MaTran add(const MaTran &other) const
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
    MaTran multiple(const MaTran &other) const
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
                result.matrix[i][j] = 0; //Cấp phát giá trị mặc định cho mảng
                for (int k = 0; k < columns; k++)
                {
                    result.matrix[i][j] += matrix[i][k] * other.matrix[k][j];
                }
            }
        }
        return result;
    }
    // Hiển thị
    int display() const
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    int rows, columns;
    cout << "Nhập số hàng của ma trận: ";
    cin >> rows;
    cout << "Nhập số cột của ma trận: ";
    cin >> columns;

    MaTran matrix1(rows, columns);
    cout << "Nhập ma trận thứ 1: " << endl;
    matrix1.nhap();
    MaTran matrix2(rows, columns);
    cout << "Nhập ma trận thứ 2: " << endl;
    matrix2.nhap();

    // Cộng 2 ma trận
    MaTran sum = matrix1.add(matrix2);
    cout << "tổng 2 ma trận: " << endl;
    sum.display();

    // Nhân 2 ma trận
    MaTran product = matrix1.multiple(matrix2);
    cout << "tích 2 ma trận: " << endl;
    product.display();

    return 0;
}
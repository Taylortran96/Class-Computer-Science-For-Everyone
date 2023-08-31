// Tính khoảng cách Euclid giữa 2 điểm trong hệ tọa độ Oxy
// Input
// Tọa độ của 2 điểm (x1, y1) và (x2, y2) là các số nguyên.( -10^6 ≤xi, yi ≤10^6)
// Output
// Khoảng cách giữa 2 điểm lấy độ chính xác với 2 chữ số

#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <cmath>
using namespace std;

double tinhkhoangcach(int x1, int x2, int y1, int y2)
{
    double khoangcach = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    return khoangcach;
}

int main()
{
    int x1, y1, x2, y2;
    cout << "Nhập tọa dộ điểm 1 (x1, y1) ";
    cin >> x1 >> y1;
    cout << "Nhập tọa dộ điểm 2 (x2, y2) ";
    cin >> x2 >> y2;

    double khoangcach = tinhkhoangcach(x1, y1, x2, y2);

    cout << "Khoảng cách giữa 2 điểm: " << fixed << setprecision(2) << khoangcach << endl;

    return 0;
}
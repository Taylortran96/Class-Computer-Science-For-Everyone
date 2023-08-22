//Bài 1
#include <iostream>
using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;

    if (b != 0) {
        long long quotient = a / b;
        long long remainder = a % b;

        cout << "Phần nguyên " << quotient << endl;
        cout << "Phần dư " << remainder << endl;
    } else {
        cout << "Số b không được bằng 0." << endl;
    }

    return 0;
}



//Bài 2
#include <iostream>

using namespace std;

int main() {
    int x;

    cin >> x;

    if (x > 0 && x < 10) {
        cout << x * x * x + 3 * x * x + x + 1 << endl;
    } else {
        cout << "Nhap sai" << endl;
    }

    return 0;
}


//Bài 3
#include <iostream>

using namespace std;

int main() {
    int a, b, c;

    cin >> a >> b >> c;

    if (a > 0 && a < 10 && b > 0 && b < 10 && c > 0 && c < 10) {
        cout << a * (b + c) + b * (a + c) << endl;
    } else {
        cout << "Input Sai" << endl;
    }

    return 0;
}


//Bài 4
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    if (b != 0) {
        int sum = a + b;
        int difference = a - b;
        int product = a * b;
        double quotient = static_cast<double>(a) / b;

        cout << "Tổng: " << sum << endl;
        cout << "Hiệu: " << difference << endl;
        cout << "Tích: " << product << endl;
        cout << fixed << setprecision(2);
        cout << "Thương: " << quotient << endl;
    } else {
        cout << "Số b không được bằng 0." << endl;
    }

    return 0;
}



//Bài 5

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int r;
    cin >> r;

    if (r >= 1 && r <= 1000000) {
        double pi = 3.14159265358979323846;

        double perimeter = 2 * pi * r;
        double area = pi * r * r;

        cout << fixed << setprecision(2);
        cout << "Chu vi: " << perimeter << endl;
        cout << "Diện tích: " << area << endl;
    } else {
        cout << "Invalid input." << endl;
    }

    return 0;
}



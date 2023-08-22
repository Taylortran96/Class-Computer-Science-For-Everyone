#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int add(int a, int b)
{
    return a + b;
}

double add(double a, double b)
{
    return a + b;
}
int add(int a, int b, int c)
{
    return a * b + c;
}
int main()
{
    int a = 2, b = 3, c = 4;

    cout << add(a, b, c) << endl;
    cout << add(a, b) << endl;

    return 0;
}
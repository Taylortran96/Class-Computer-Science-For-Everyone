// Cú pháp
#include <isostream>
using namespace std;

// nếu mà Parent private thì Child phải dùng friend để truy cập vào idParent
class Parent
{
public:
    int idParent;

}
// Child kế thừa Parent
class Child : public Parent
{
public:
    int idChildren;
}

int
main()
{
    Child obj;
    obj.idParent = 1;
    obj.idChildren = 2;
    cout << "Parent: " << obj.idParent << endl;
    cout << "Child: " << obj.idChildren << endl;
    return 0;
}

// Đa lớp
#include <isostream>
using namespace std;

class Vehicle
{
public:
    Vehicle()
    {
        cout << "This is a vehicle" << endl;
    };

}

class Fourwwheeler
{
public:
    Fourwwheeler()
    {
        cout << "This is a fourwwheeler vehicle" << endl;
    };
}

// Car kế thừa nhiều class Cha
class Car : public Vehicle,
            Fourwwheeler
{

}

int
main()
{
    Car car;

    return 0;
}
// Java => C# => OOP => Solid => Design pattern
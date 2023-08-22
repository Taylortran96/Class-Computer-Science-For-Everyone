// #include <iostream>
// #include <iomanip>

// // using namespace std; 

// #define ll long long
// #define infinity 10e9
// #define N 10


// int main () {

    // bool isOdd = false; 
    // int n = 9; // 4 bytes => 32 bit => 2^32 = 10^6  => Biểu diễn 999999900
    // long c = 10; //8 bytes => 64 bit ( 2^64) = 10^9
    // char ch = 't'; //1 bytes
    // string str ="hello"; //4 bytes
    // float a = 1.2; //1 bytes
    // double  c;
    // cout << a << endl;

    // int test = 2147;
    // cout << "Integer : "<< INT_MIN << endl;

    // if (n % 2 != 0) {
    //     isOdd = true;
    // }
    // if (isOdd == true) {
    //     cout <<"N là số lẻ" << endl;
    // } else {
    //     cout <<"N là số chẵn" << endl;
    // }
    // return 0;

    // int a = 3;
    // int b = 2;
    // cout << a/b << endl; //KQ = 1 (lấy số nguyên)
    // cout << (double)a/b << endl; // double or float

    // double x1 = 7.5;
    // cout << x1*x1 << endl; //KQ: 56.25 -- số thực
    // cout << (int) x1 << endl; //KQ: 7 -- số nguyên

    // char x2 = 'A';
    // cout << (int) x2 << endl; 
    
    //Làm tròn số:
    // doubt d = 9.87654321;
    // cout << fixed << setprecision (3) << d << endl; 

    //Toán tử ba ngôi
    // int a = 0, b = 11;
    // cout << ({a > b} ? a : b);

    // int a = 10;
    // if (a % 5 == 0) {
    //     (a % 2 == 0) {
    //         cout << "Đây là số chia hết cho 2" << endl; 
    //     }
    // }

    // Switch ... case
    // int month;
    // cin >> month;
    // switch (month)
    // {
    // case 1: case 3: case 5: case 7: case 10: case 12:
    //     cout << "Tháng có 31 ngày" << endl;
    //     break;
    // case 2:
    //     cout << "Tháng có 28 hoặc 29 ngày" << endl;
    //     break;
    // default:
    //     cout << "Tháng có 30 ngày" << endl;
    //     break;
    // }
     
    // For ...
    // Break là dừng, thoát ra khỏi for ...
    // Continue là các lệnh đằng sau continue, sẽ bỏ qua, và tiếp tục vòng lặp
    // int n;
    // cout << "Nhập n:" << endl;
    // cin >> n;
    // int sum = 0;
    // for (int i = 0; i < n; i++){
    //     if(i % 2 == 0){
    //         sum += 1;
    //     }

    //     if (i == 4)
    //     {
    //         break;
    //     }
    //     sum += 1; // chỉ tính tổng 1,2,3,4 rồi dừng, thoát khỏi vòng loop

    //     if (i == 4)
    //     {
    //         continue;
    //     }
    //     sum += 1; // KQ: 1 + 2 + 3 + 5 = 11 (Skip số 4)
        
    // }

    // While
    // int i = 0;
    // // while (i < 2)
    // {
    //     cout << "Hello" << endl;
    // }

    //Do while: Làm trước rồi check điều kiện
//     do
//     {
//         cout << "Hello" << endl;
//         i++
//     } while (i > 20);
//     //Dù i không lớn 20 thì vẫn in ra "Hello"
    
//     // Check vòng lặp có bị vô hạn không => Check điều kiện
//     int i = 10;
//     while (i > 12){
//         cout << "Hello" << endl;
//         i++
//     }

// }

// cin >>
// cout << "" << endl; 
// Khai báo biến int a; ở ngoài int main ()-- global 
// Khai báo biến int a; trong int main ()  -- local function

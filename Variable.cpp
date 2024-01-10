// Variable
// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
//     int myNumber = 5;
//     float myroundedinteger = 5.999999;
//     double myDouble = 5.99;
//     char myChar = 'd';
//     bool myBoolean = true;
//     string myString = " Nguyen Van A";

//     cout << "int: " << myNumber << "\n";             // 5
//     cout << "Integer: " << myroundedinteger << "\n"; // 6
//     cout << "double: " << myDouble << "\n";          // 5.99
//     cout << "Char: " << myChar << "\n";              //
//     cout << "Boolean: " << myBoolean << "\n";        // true -> 1 || false -> 0
//     cout << "String: " << myString << "\n";          // name
// }

// output hex
// #include <iostream>
// using namespace std;

// int main() {
//  char c;
//  cout << "nhap ki  tu : ";
//  cin >> c;
//  cout << "ASCII la : " << c << " is " << int(c);
//  return 0;
// }

///

// #include <sstream>
// #include <string>
// #include <iostream>
// using namespace std;
// void nhiphan (int  x) {
//     if (x == 0) {
//         return ;
//     } else  {
//         int r = x % 2 ;
//         nhiphan(x/2);
//         cout << r;
//     }

// }
// int main () {
//     int n ;
//     do {
//         cin >> n;

//     }while (n < 0);

//     nhiphan(n);
//     return 0 ;
// };
//

// #include <string>
// #include <iostream>
// using namespace std;

// int main () {
//     int age ;
//     string name;
//     bool student = true ;
//     cout << " Nhap ten  :";
//     cin >> name  ;
//       cin.ignore();
//       cout << " Nhap tuoi :";
//     cin >> age ;

//     if (age  >= 18 && student )  {
//         cout << name << " " << age << " tuoi " << "la sinh vien";
//     } else {
//         cout << name << age << " khong phai la sinh vien ";
//     }

// }

// dieu dao nguoc
// #include <string>
// #include <iostream>
// using namespace std;

// void  fun(int &a , int &b ) { // ham swap
//     int c = a ;
//     a = b ;
//     b = c ;

// }

// int main () {
//     int  a , b ;

//     cin >> a >> b ;
//     fun (a ,b) ;
//     cout << a << " " <<b;
// }

// #include <string>
// #include <iostream>
// using namespace std;

// int main () {
//     bool p ;
//     cout << " nhap so ";
//     cin >> p ;
//   if (p == true ) {
//       cout << "ok";
//   } else {
//       cout << " ";
//   }
// }

// nhap so a b ham tra ve  phep toan
// #include <string>
// #include <iostream>
// using namespace std;

// int sum  (int a , int b) {
//     return a + b;
// }
// float  sum1 (int a ,int b ) {
//     return a - b ;
// }

// int main () {
//     int a , b ;
//     cout << "Nhap a :" ;
//     cin >> a ;
//     cout << "Nhap b :";
//     cin >> b;

//     cout << "a + b = " << sum(a,b) << endl;
//     cout << "a - b = "  << sum1(a,b);

// }

// danh sách kề

// #include <iostream>
// using namespace std;
// int max_value(int a, int b)
// {
// if (a > b)
// return a;
// else
// return b;
// }
// int main()
// {
// int x1, y1, x2, y2, x3, y3;
// cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
// // Lời gọi hàm.
// cout << "Max giữa x1 và y1 là: " << max_value(x1, y1) << endl;
// cout << "Max giữa x2 và y2 là: " << max_value(x2, y2) << endl;
// cout << "Max giữa x3 và y3 là: " << max_value(x3, y3);
// return 0;
// }

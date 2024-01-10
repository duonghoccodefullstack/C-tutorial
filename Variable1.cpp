

// #include <iostream>
// #include <string>
// using namespace std;

// xoa phan tu o dau va cuoi co dau cach
// int main()
// {
//     string str ;

//     cout << "Nhap chuoi : ";
//     getline(cin ,str);

//     while (str[0] == ' ') {
//         str.erase(0, 1);
//     }
//     while (str[str.length() -1 ] == ' ') {
//         str.erase(str.length() -1 , 1 ) ;
//     }

//     cout << " ket qua : " << str ;
//     return 0;
// }

//  xoa khoang  cach o giua
// int main () {
//     string str ;

//      cout << "Nhap chuoi : ";
//      getline(cin ,str);

//      int i = 0;
//      while (i < str.length() ) {
//          if(str[i] == ' ' && str[ i + 1] ==  ' ') {
//              str.erase(i , 1 );
//          } else {
//              i ++;
//          }
//      }
//      cout << " ket qua : " << str;
//     return 0;
// }

// Viet hoa  moi chu cai dau

// int main () {
//     string str ;

//      cout << "Nhap chuoi : ";
//      getline(cin ,str);

//     for (int i = 0  ; i< str.length() ; i++) {
//         str[i] = tolower(str[i]);
//     }

//     return 0;
// }

// viet hoa chu cai dau

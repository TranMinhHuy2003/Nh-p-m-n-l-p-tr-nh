#include <iostream>
using namespace std;
int main () {
    int a;
    cout << "Nhap lua chon: " ;
    cin >> a;
    switch (a) {
          case 1: {
              cout << "Ca phe den";
          } break ;
          case 2: {
              cout << "Ca phe sua da";
          } break ;
          case 3: {
              cout << "Bac xiu";
          } break ;
          case 4: {
              cout << "Sinh to dau";
          } break ;
          case 5: {
              cout << "Nuoc cam";
          } break ;
          default: {
              cout << "Xin cam on quy khach";
          }
    }
    return 0;
}
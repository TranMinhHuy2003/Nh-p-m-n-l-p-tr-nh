                                  // Tính tổng các số từ 1 đến n
#include <iostream>
using namespace std;
int main() {
    int tong = 0;
    int n;
    do {
       cout << "Nhap n: ";
       cin >> n;
    } while (n<=0);
    for (int i =1 ;i<=n ; i++) {
        tong = tong + i ;
    }
    cout << "Ket qua la: " << tong;
    return 0;
}
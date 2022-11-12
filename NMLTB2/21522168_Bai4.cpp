// Giải phương trình bậc 1 dạng ax +  b = 0
#include <iostream> 
using namespace std;
int main () {
    float a,b;
    cout << "\nNhap a: ";
    cin >> a;
    cout << "\nNhap b: ";
    cin >> b;
    if (a==0) {
        if (b==0) {
            cout << "\nPhuong trinh co vo so nghiem";
        }
        else {
            cout << "\nPhuong trinh vo nghiem";
        }
    }
    else {
        if (-b/a==0) {
            cout << "\nPhuong trinh co nghiem: " << 0 ;
        } else {
            cout << "\nPhuong trinh co nghiem: " << -b/a ;
        }
    }
    system("pause");
    system("cls");
    return 0;
}
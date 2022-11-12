// Giải phương trình bậc 1 dạng ax +  b = 0
#include <iostream> 
using namespace std;
int main () {
    double a,b;
    cout << "Nhap a: " << endl;
    cin >> a;
    cout << "Nhap b: " << endl;
    cin >> b;
    if (a==0) {
        if (b==0) {
            cout << "Phuong trinh co vo so nghiem" << endl;
        }
        else {
            cout << "Phuong trinh vo nghiem" << endl;
        }
    }
    else {
        cout << "Phuong trinh co nghiem: " << -b/a ;
    }
    system("pause");
    system("cls");
    return 0;
}
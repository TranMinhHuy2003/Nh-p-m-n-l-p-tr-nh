// Giải phương trình bậc 2 có dạng ax^2 + bx + c = 0 
#include <iostream> 
#include <cmath>
using namespace std ;

int main () {
    float  a,b,c;
    float denta = ((b*b)-(4*a*c));
    cout<< "\nNhap a: ";
    cin >> a ;
    cout<< "\nNhap b: ";
    cin >> b ;
    cout<< "\nNhap c: ";
    cin >> c ;
    if (a==0) {
        if (b==0) {
            if (c==0) {
                cout << "\nPhuong trinh co vo so nghiem";
            }
            else {
                cout << "\nPhuong trinh vo nghiem";
            }
        }
        else {
            cout << "\nPhuong trinh co nghiem: " << -c/b ;
        }
    } 
    else {
        if (c==0) {
            cout << "\nNghiem cua phuong trinh la: " << endl<< "x1=0" << endl<< "x2= " << -b/a << endl;
        }
        else if (denta<0) {
            cout << "\nPhuong trinh vo nghiem";

        }
        else if (denta==0) {
            cout << "\nPhuong trinh co nghiem kep x1=x2=" << -b/(2*a);
        }
        else {
            cout << "\nPhuong trinh co 2 nghiem phan biet: "<< endl<< "x1= " << (-b + (sqrt(denta)))/(2*a) << endl<< "x2= " << (-b - (sqrt(denta)))/(2*a);
        }
        
    }
    system("pause");
    system("cls");
    return 0;
    
}
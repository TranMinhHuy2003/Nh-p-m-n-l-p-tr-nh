// Giải phương trình bậc 2 có dạng ax^2 + bx + c = 0 
#include <iostream> 
#include <cmath>
using namespace std ;
int main () {
    float  a,b,c;
    float denta = ((b*b)-(4*a*c));
    cout<< "Nhap a: " << endl;
    cin >> a ;
    cout<< "Nhap b: " << endl;
    cin >> b ;
    cout<< "Nhap c: " << endl;
    cin >> c ;
    if (a==0) {
        if (b==0) {
            if (c==0) {
                cout << "Phuong trinh co vo so nghiem" << endl;
            }
            else {
                cout << "Phuong trinh vo nghiem" << endl;
            }
        }
        else {
            cout << "Phuong trinh co nghiem: " << -c/b ;
        }
    } 
    else {
        if (c==0) {
            cout << "Nghiem cua phuong trinh la: " << endl<< "x1=0" << endl<< "x2= " << -b/a << endl;
        }
        else if (denta<0) {
            cout << "Phuong trinh vo nghiem"<< endl;

        }
        else if (denta==0) {
            cout << "Phuong trinh co nghiem kep x1=x2=  " << -b/(2*a) << endl ;
        }
        else {
            cout << "Phuong trinh co 2 nghiem phan biet: "<< endl<< "x1= " << (-b + (sqrt(denta)))/(2*a) << endl<< "x2= " << (-b - (sqrt(denta)))/(2*a);
        }
        
    }
    system("pause");
    system("cls");
    return 0;
    
}
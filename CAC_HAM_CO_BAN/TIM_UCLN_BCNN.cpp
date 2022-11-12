// Tìm UCLN và BCNN của 2 số nguyên 
#include <iostream>
using namespace std;

int UCLN (int , int );
int BCNN (int , int );

int main () {
    int a,b;
    int uc=UCLN(a,b);
    cout << "Nhap a: ";
    cin >> a;
    cout << "Nhap b: ";
    cin >> b;
    cout <<"Uoc chung lon nhat la: " << UCLN(a,b)<< endl;
    cout <<"Boi chung nho nhat la: " << BCNN(a,b);
    return 0;
}

int UCLN (int a, int b) {
    if (a<b) {
        for (int i=a; i>=1; i--) {
            if (a%i==0 && b%i==0) {
                return i;
            } 
        }
    } else {
         for (int i=b; i>=1; i--) {
            if (a%i==0 && b%i==0) {
                return i;
            }
        }
    }
    return true;
}

int BCNN (int a, int b) {
    return (a*b)/UCLN(a,b);
}
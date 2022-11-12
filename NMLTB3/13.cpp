#include <iostream>
using namespace std;

int main () {
    int n;
    do {
        cout <<"\nNhap so nguyen duong n: ";
        cin>>n;
        if (n<=0) {
            cout <<"\nn khong hop le, vui long nhap lai!";
        }
    } while (n<=0);
    int k;
    int t=n;
    int dem=0;
    int dem1=0;
    do {
        k=n%10;
        n/=10;
        if (k%2==0) {
            dem++;
        } else {
            dem1++;
        }
    } while (n!=0);
    cout <<t<<" co "<<dem<<" chu so chan"<<endl;
    cout <<t<<" co "<<dem1<<" chu so le";
    system("pause");
    system("cls");
    return 0;
}
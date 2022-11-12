#include <iostream>
using namespace std;

int main () {
    int n;
    do {
        cout <<"\nNhap n tu 1 den 9: ";
        cin>>n;
        if (n<1||n>9) {
            cout <<"\nn khong hop le, vui long nhap lai!";
        }
    } while (n<1||n>9);
    cout <<"\t\t=====BANG NHAN "<<n<<"====="<<endl;
    for (int j=0; j<=10; j++) {
         cout <<"\t\t\t"<<n<<"x"<<j<<"="<<n*j<<endl;
    }
    
    system("pause");
    system("cls");
    return 0;
}
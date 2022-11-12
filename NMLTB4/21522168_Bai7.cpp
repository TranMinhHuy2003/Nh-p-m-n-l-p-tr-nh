#include <iostream>
using namespace std;

void Nhap (int &n) {
    cout << "Nhap so n: ";
    cin>>n;
}

long long giaithua (int n) {
    if (n==0 || n==1) {
        return 1;
    } else if (n<0) {
        return 0;
    }
    return n*giaithua (n-1);
}

int main ( ) {
    int n;
    Nhap(n);
    if (giaithua(n)==0) {
        cout <<"\nKhong tinh duoc!";
    } else {
        cout <<n<<"! = "<<giaithua(n);
    }
    system("pause");
    system("cls");
    return 0;
}
   


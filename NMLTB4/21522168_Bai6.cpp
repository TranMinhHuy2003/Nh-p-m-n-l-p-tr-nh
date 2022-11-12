#include <iostream>
using namespace std;

void Nhap2so (int &a, int &b) {
    cout <<"\nNhap a: ";
    cin>>a;
    cout <<"\nNhap b: ";
    cin>>b;
}

int nhan_duong (int a, int b) {
    if (b==1) {
        return a;
    }
    return a+nhan_duong(a,b-1);
}

int nhan_am (int a, int b) {
    if (b==-1) {
        return -a;
    }
    return -a+nhan_am(a,b+1);
}


int main () {
    int a,b;
    Nhap2so(a,b);
    if (b<0) {
        cout <<a<<" x "<<"("<<b<<")"<<" = "<<nhan_am(a,b);    
    } else if (b==0) {
        cout <<a<<" x "<<b<<" = "<<0;
    } else {
        cout <<a<<" x "<<b<<" = "<<nhan_duong(a,b);
    }
    system("pause");
    system("cls");
    return 0;
}
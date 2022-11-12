#include <iostream>
#include <cmath>
using namespace std;

void Nhap (int &a) {
    cout <<"\nNhap so nhi phan: ";
    cin>>a;
}

int nhisangthap (int a) {
    int s=0;
    int mu=0;
    while (a!=0) {
        s+= (a%10)*pow(2,mu);
        a/=10;
        ++mu;
    }
    return s;
}

int main () {
    int a;
    Nhap(a); 
    cout <<"\n\n\t\tNHI PHAN SANG THAP PHAN\n";
    cout <<a<<" = "<<nhisangthap(a);
    system("pause");
    system("cls");
    return 0;
}
#include <iostream>
using namespace std;

bool KTSNT (int n) {
    if (n<2) {
        return false;
    } else {
        if (n==2) {
            return true;
        } else {
            if (n%2==0) {
                return false;
            } else {
                for (int i=2; i<n; i++) {
                    if (n%i==0) {
                        return false;
                    } else {
                        return true ;
                    }
                }
            }
        }
    }
    return true;
}

int main () {
    int n;
    do {
        cout <<"\nNhap so nguyen duong n: ";
        cin>>n;
        if (n<=0) {
            cout <<"\nn khong hop le, vui long nhap lai!";
        }
    } while (n<=0);
    bool check = KTSNT(n);
    if (check==true) {
        cout <<n<<" la so nguyen to";
    } else {
        cout <<n<<" khong la so nguyen to";
    }
    system("pause");
    system("cls");
    return 0;
}
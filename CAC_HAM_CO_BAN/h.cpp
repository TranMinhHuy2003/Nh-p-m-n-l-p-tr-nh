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

int main() {
    int n;
    do {
        cout <<"\nNhap so nguyen duong n: ";
        cin >> n;
        if (n<=0) {
            cout <<"\nn khong hop le, vui long nhap lai!";
        }
    } while (n<=0);
    for (int i=1; i<=n; i++) {
        if (KTSNT(i)==true) {
            cout <<i<<" ";
        }
    }
    int dem=0;
    for (int i=1; i<=n; i++) {
        if (KTSNT(i)==true) {
            dem+=1;
        }
    }
    cout<<"\nSo luong cac so nguyen to tu 1 den "<<n<<" la: "<<dem;
    int s=0;
    for (int i=1; i<=n; i++) {
        if (KTSNT(i)==true) {
            s+=i;
        }
    }
    cout <<"\nTong cac so nguyen to tu 1 den "<<n<<" la: "<<s;
    system("pause");
    system("cls");
	return 0;
}
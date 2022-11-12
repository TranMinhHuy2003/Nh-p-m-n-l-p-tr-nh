#include <iostream>
using namespace std;

int soluong_chuso (int n){
    int dem=0;
    while(n>=10) {
        n/=10; 
        dem++;
    }
    return dem+1;
}

int tongcacchuso (int n) {
    int s=0;
    if (n<0) {
        while (n<=-10) {
            s+=n%10;
            n/=10;
        }
        s-=n;
    } else {
        while (n!=0) {
        s+=n%10;
        n/=10;
      }
    }
    return s;
}
 
int main() {
    long n;
    cout <<"\nNhap N: ";
    cin >>n;
    for (int i=n-1; i<n; i--) {
        if (n<20 && n>=0) {
            cout <<0;
            break;
        } else if (soluong_chuso(i)==soluong_chuso(n)) {
            if (tongcacchuso(i)==tongcacchuso(n)) {
                cout <<i;
                break;
            }
        } else {
            cout <<0;
            break;
        }
    }
    system("pause");
    system("cls");
    return 0;
}
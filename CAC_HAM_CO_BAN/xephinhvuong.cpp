#include <iostream>
using namespace std;

int main () {
    int a,b;
    do {
        cout <<"\nNhap A: ";
        cin >> a;
        if (a<20) {
            cout <<"\nGia tri A phai lon hon hoac bang 20 !!!";
        }
    } while (a<20);
    do {
        cout <<"\nNhap B: ";
        cin >> b;
        if (b<20) {
            cout <<"\nGia tri B phai lon hon hoac bang 20 !!!";
        }
    } while (b<20);
    int k=10;
    int h=1;
    int min = a*b - h*k*k;
    for ( k=10; k<=20; k++) {
        for ( h=1; h<=(a*b)/(k*k); h++) {
            float t1 = t;
            float t2 = float(a)/float(k);
            int min1 = min;
            int min2 = a*b - h*k*k;
            if (min2<=min1 && min2>=0 && t2<=t1 && t2>=0 && h*k<=a && h*k<=b) {
                min = min2;
                t = t2;
            }
        }
    }
    cout << min ;
    system("pause");
    system("cls");
    return 0;
}
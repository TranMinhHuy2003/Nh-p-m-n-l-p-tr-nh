#include <iostream>
using namespace std;

int main () {
    float a,b,c,t;
    cout <<"\nNhap a: ";
    cin >>a;
    cout <<"\nNhap b: ";
    cin >>b;
    cout <<"\nNhap c: ";
    cin >>c;
    if (a>b) {
        t=a;
        a=b;
        b=t;
    }
    if (a>c) {
        t=a;
        a=c;
        c=t;
    }
    if (b>c) {
        t=b;
        b=c;
        c=t;
    }
    cout <<"3 so theo thu tu tang dan: "<<a<<" "<<b<<" "<<c;
    system("pause");
    system("cls");
    return 0;
}
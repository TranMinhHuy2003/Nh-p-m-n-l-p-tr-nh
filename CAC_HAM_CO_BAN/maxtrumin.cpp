#include <iostream>
using namespace std;

float max (float a, float b) {
    return (a>b)?a:b;
}

float min (float a, float b) {
    return (a<b)?a:b;
}

int main () {
    float a,b,c,d;
    cout <<"\nNhap a,b,c,d: ";
    cin >>a>>b>>c>>d;
    cout <<"\nMax-min="<<max(max(a,b),max(c,d))<<"-"<<min(min(a,b),min(c,d))<<"="<<max(max(a,b),max(c,d))-min(min(a,b),min(c,d));
    system("pause");
    system("cls");
    return 0;
}
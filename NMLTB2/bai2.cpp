#include <iostream>
using namespace std;

float Timmax (float a, float b, float c) {
    float max=a;
    if (b>max) {
        max=b;
    } if (c>max) {
        max=c;
    }
    return max;
} 

int main () {
    float a,b,c;
    cout <<"\nNhap a: ";
    cin >> a;
    cout <<"\nNhap b: ";
    cin >> b;
    cout <<"\nNhap c: ";
    cin >> c;
    cout <<"\nSo lon nhat la: " <<Timmax(a,b,c);
    system("pause");
    system("cls");
    return 0;
}
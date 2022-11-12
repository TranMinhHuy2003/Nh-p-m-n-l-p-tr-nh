#include <iostream>
using namespace std;

int main () {
    int i=0;
    int s=0;
    while (s<=1000) {
        i++;
        s+=i;
    }
    cout <<"\nSo can tim la: "<<i;
    system("pause");
    system("cls");
    return 0;
}
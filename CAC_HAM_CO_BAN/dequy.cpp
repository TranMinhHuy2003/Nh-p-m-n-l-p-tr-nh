#include <iostream>

using namespace std;

long factor (int n) {
    if (n==0 || n==1) {
        return 1;
    } else {
        return n*factor (n-1);
    }
}
int sumofN (int n) {
    if (n==1) {
        return 1;
    } else if (n==0) {
        return 0;
    } else {
        return n+sumofN(n-1);
    }
}
int main ( ) {
    int n;
    cout << "Nhap so n: ";
    cin>>n;
    cout << "Sum of numbers= " << sumofN(n) << endl;
    cout << "N!= " << factor (n) << endl;
    system("pause");
    system("cls");
    return 0;
}
   


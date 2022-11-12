#include <iostream>
using namespace std;

int main () {
    int n;
    cin >>n;
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            if (j<=i) {
                cout <<" * ";
            } else {
                cout <<"   ";
            }
        }
        cout << endl;
    }
    int k=1;
    while (k!=n-1) {
    for (int i=n+k; i<=n+k; k++) {
        for (int j=1; j<=n; j++) {
            if ((i-j)>(n-j)&&(n-j)>(k-1)) {
                cout <<" * ";
            } else {
                cout <<"   ";
            }
        }
        cout << endl;
    }
}

    system("pause");
    system("cls");
    return 0;
}
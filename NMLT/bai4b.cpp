#include <iostream>

using namespace std;

int main() {
    int n;
    do {
        cout << "nhap so nguyen duong n: ";
	    cin >> n;
        if (n<=0) {
            cout <<"\nn khong hop le vui long nhap lai!";
        }
    } while (n<=0);
	int S = 0;
	for (int i = 1; i <= n; i++) {
		S = S + i*i;
	}
	cout << "S = " << S;
	return 0;
}
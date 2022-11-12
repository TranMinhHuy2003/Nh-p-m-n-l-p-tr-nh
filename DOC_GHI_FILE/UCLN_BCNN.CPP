/*Bài 3. Đọc các số nguyên từ file INPUT.TXT biết
+ Chỉ có 1 dòng duy nhất chứa các số nguyên và mỗi số nguyên cách nhau bởi 1 dấu phẩy
VD: INPUT.TXT
1,3,6,9

                              === Yêu cầu ===
- File UCLN.TXT lưu 1 số nguyên là ước số chung lớn nhất của tất cả các phần tử của mảng
- File BCNN.TXT lưu 1 số nguyên là bội chung nhỏ nhất của tất cả các phần tử của mảng*/

#include <iostream>
#include <fstream>
using namespace std;

void doc_file (int a[], int &n, ifstream &filein) {
    while (!filein.eof()) {
        filein >> a[n];
        char x;
        filein >>x;
        n++;
    }
}

int tim_ucln (int x, int y) {
    while (x!=y) {
        if (x>y) {
            x=x-y;
        } else {
            y=y-x;
        }
    }
    return x;
}

int tim_bcnn (int x, int y) {
    return (x*y)/tim_ucln(x,y);
}

int Tim_ucln_mang (int a[], int n) {
    int x=a[0];
    for (int i=1; i<n; i++) {
        x=tim_ucln(x, a[i]);
    }
    return x;
}

int Tim_bcnn_mang (int a[], int n) {
    int x=a[0];
    for (int i=1; i<n; i++) {
        x=tim_bcnn(x, a[i]);
    }
    return x;
}


int main () {
    ifstream filein;
    int a[100];
    int n=0;
    filein.open("INPUT.txt", ios_base::in);
    if (filein.fail()==true) {
        cout <<"\nFile khong ton tai";
        return 0;
    }
    doc_file(a, n, filein);
    ofstream fileout;
    fileout.open("UCLN.txt", ios_base::out);
    fileout <<Tim_ucln_mang(a, n)<<endl;
    fileout.close();
    fileout.open("BCNN.txt", ios_base::out);
    fileout <<Tim_bcnn_mang(a, n);
    fileout.close();
    filein.close();
    system ("pause");
    system("cls");
    return 0;
}

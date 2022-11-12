// Tính tổng các phần tử trong mảng 
#include <iostream> 
using namespace std; 

void Nhap_Mang (int arr[], int );
void Xuat_Mang (int arr[], int );
int sum (int arr[], int );

int main () {
    int arr[100];
    int n;
    do {
        cout<< "Nhap so luong phan tu mang: ";
        cin >> n;
        if (n<=0 || n>100) {
            cout << "So luong khong hop le"<< endl;
        }
    } while (n<=0 || n>100);
     cout <<"\t\tNHAP MANG"<< endl;
    Nhap_Mang(arr, n);
    cout <<"\t\tXUAT MANG "<<endl;
    Xuat_Mang(arr, n);
     cout<<"\n\n\tTONG CUA CAC PHAN TU LA: "<<endl<< sum(arr, n);

    return 0;
}
void Nhap_Mang (int arr[], int n) {
    for (int i=0; i<n; i++) {
        cout <<"Nhap arr["<<i<<"]:";
        cin >>arr[i];
    }
}
void Xuat_Mang (int arr[], int n) {
    for(int i=0; i< n; i++) {
        cout <<arr[i]<< " ";
    }
}
int sum (int arr[], int n) {
    int tong = 0 ;
    for (int i=0; i<n; i++) {
        tong+=arr[i];
    }
    return tong;
}
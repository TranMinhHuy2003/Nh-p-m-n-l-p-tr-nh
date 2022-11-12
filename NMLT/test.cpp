#include <iostream>
using namespace std;

int main () {
  int n;
  do {
    cout <<"\nNhap so nguyen duong n: ";
    cin >>n;
    if (n<=0) {
      cout <<"\nNhap lai";
    }
  } while (n<=0);
  int sum=0;
  for (int i=1; i<n; i++) {
    sum+=i;
  }
  cout <<"\nTong cac so nguyen duong nho hon n: "<<sum;
  system("pause");
  system("cls");
  return 0;
}
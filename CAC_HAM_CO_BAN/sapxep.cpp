#include<iostream>

using namespace std;

int main () {
    int n;
    cin >>n;
    int arr[1000];
    for (int i=0; i<n-1 ; i++) {
        cin >> arr[i];
    }
    for (int i=0; i<n-1 ; i++) {
        for (int j=i+1; j<n; j++) {
            if (arr[i]>arr[j]) {
               int t=arr[i];
                arr[i]=arr[j];
                arr[j]=t ;
            }
        }
    }
    for (int i=0;i<n-1 ;i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
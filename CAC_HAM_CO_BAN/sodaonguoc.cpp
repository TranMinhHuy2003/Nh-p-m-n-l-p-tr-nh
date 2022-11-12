#include <iostream>
using namespace std;
 
int main()
{
    int so;
    cout << "Nhap so: ";
    cin >> so;
    cout << "So dao nguoc cua " << so  << " la: ";
    for (; so ; so = so / 10) {
        cout << so % 10;
    }
    system("pause");
    system("cls");
    return 0;
}
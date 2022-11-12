#include<iostream> // use cin and cout
#include<string.h> // use character
using namespace std;
 
int main()
{
   
         char a;
         cout<<" Nhap ki tu   : ";
         cin>>a;
         if ( (a >= 'A') && (a <= 'Z') )
         {
                int k =  int (a) + 32 ;
                cout<< " Ki tu tuong duong "<< a << "  is ..." << char(k);
         }
         cout<< endl;
         system ("pause");
         system("cls");
         return 0;
}

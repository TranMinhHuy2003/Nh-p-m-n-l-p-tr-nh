#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
void chuanhoachuoi(char[]);//khai bao nguyen mau ham
int main()
{
    char a[100];
   printf("Nhap vao chuoi:");
   gets(a);
   chuanhoachuoi(a);
   printf("%s",a);
   getch();
}
void chuanhoachuoi(char a[])
{
    int i,j;
    j=strlen(a);
    printf("\nChuoi duoc chuan hoa la:");
    for(i=0;i<j;i++)
    if(a[i]>=65&&a[i]<=90)  
        a[i]=a[i]+32;       
    int n=strlen(a);
    i=1;
    while (a[i]!='\0') {
    if (a[i] == ' ' && a[i+1] == ' ') {
        for (j=i+1; j<n-1; ++j) a[j]=a[j+1];
        a[n-1]='\0';
        n--;
    }
     else i++;
    }
   for(i=0;i<j;i++)
    if(a[i]==' ')
        a[i+1]=toupper(a[i+1]);  
        a[0]=a[0]-32;        
}
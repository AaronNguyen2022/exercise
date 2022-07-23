/*
    Bài tập: Nhập 2 chuỗi bất kỳ (không biết size), so sánh 2 chuỗi 
    có giống nhau hay không?
*/
#include <stdio.h>  

int compare(char[],char[]);  

int main()  
{  
   char str1[100]; 
   char str2[100]; 

   printf("Nhap vao chuoi 1: ");  
   gets(str1);  
   printf("Nhap vao chuoi 2: ");  
   gets(str2); 

   int c = compare(str1,str2); // calling compare() function  
   if(c == 0)  
   printf("Chuoi giong nhau");  
   else  
   printf("Chuoi khong giong nhau!");  
  
    return 0;  
}  
  
// Quét và so sánh từng cặp vị trí của 2 chuỗi, nếu khác thì cờ flag lên 1
int compare(char a[],char b[])  
{   
    int flag=0, i=0;  // integer variables declaration  
    while((a[i] != '\0') && (b[i]!='\0'))  
    {  
       if(a[i] != b[i])  
       {  
           flag = 1;  
           break;  
       }  
       i++;  
    }  
    if(flag==0)  return 0;  
    else  return 1;  
}
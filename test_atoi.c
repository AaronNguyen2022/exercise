
#include <stdio.h>

// convert Ascii to integer
int test_atoi(char* str)   // Ascii to integer
{
   if(*str == '\0')  
   return 0;

   int res = 0;      // khởi tạo biến kết quả res
   int sign = 1;     // khởi tạo biến dấu sign (dương)
   int i = 0;        // khởi tạo chỉ số index

   // Ký tự đầu tiên có dấu "-" thì là số âm
   if(str[0] == '-'){
      sign = -1;
      i++;
   }
   /* Loại trừ trường hợp ký tự null ở đầu chuỗi và khác ký tự số.
      quét mỗi ký tự liền kề trăm, chục,.. *10
      mã ascii ký tự 0,1,2..9 là 48, 49, 50
   */
   for(; str[i] != '\0'; ++i){
      if((str[i]<'0') || (str[i]>'9'))
      return 0;

      res = res*10 + str[i] - '0';
   }
   return sign*res;
}

int main()
{
	char str1[] = "1612";
	int val1 = test_atoi(str1);
   printf("Convert val1: %d\n", val1);

   char str2[] = "-1612";
	int val2 = test_atoi(str2);
   printf("Convert val2: %d\n", val2);

   char str3[] = "";
	int val3 = test_atoi(str3);
   printf("Convert val3: %d\n", val3);

   char str4[] = "abc";
	int val4 = test_atoi(str4);
   printf("Convert val4: %d\n", val4);
   
	return 0;
}
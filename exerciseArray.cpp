#include <iostream>
#include <cstdlib> // for srand() and rand()
#include <ctime>   // for time()
#include <string>
using namespace std;

#define MAX 100

void nhapMang(int arr[], int &n);
void xuatMang(int arr[], int n);
void lonNhat(int arr[], int n);
void nhoNhat(int arr[], int n);
void hoanVi(int &a, int &b);
void sapXepTang(int arr[], int n);
void sapXepGiam(int arr[], int n);


int main()
{
	int myArray[MAX];   // kích thước lớn nhất
	int nSize; 			// Được sử dụng

	// nhập mảng
	nhapMang(myArray, nSize);

	// xuất mảng
	cout << "myArray: " << endl;
	xuatMang(myArray, nSize);

	// tìm số lớn nhất, nhỏ nhất trong mảng
	lonNhat(myArray, nSize);
	nhoNhat(myArray, nSize);

	// sắp xếp mảng tăng
    cout << "Mang sau khi sap xep tang: " << endl;
	sapXepTang(myArray, nSize);
    xuatMang(myArray, nSize);

	// sắp xếp mảng giảm
    cout << "Mang sau khi sap xep giam: " << endl;
	sapXepGiam(myArray, nSize);
    xuatMang(myArray, nSize);

	return 0;
}

// hàm nhập mảng tự động
void nhapMang(int arr[], int &n)
{
	// khởi tạo số ngẫu nhiên
	srand(time(NULL));
	cout << "Nhap so luong phan tu n : ";
	cin >> n;
	
	// khởi tạo ngẫu nhiên từng phần tử từ chỉ số 0 đến n – 1
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand();
	}
}

// hàm xuất mảng
void xuatMang(int arr[], int n)
{
	// xuất từng phần tử cho mảng từ chỉ số 0 đến n – 1
	for (int i = 0; i < n; i++)
	{
		cout << "array[" << i << "] = " << arr[i] << endl;
	}
}
void lonNhat(int arr[], int n)
{
    int lonNhat = arr[0];
    for (int i = 1; i < n; i++)
        if (lonNhat < arr[i])
            lonNhat = arr[i];
    cout << "=> Phan tu lon nhat trong mang tren la: " << lonNhat <<endl;
}

// hàm tìm số nhỏ nhất trong mảng
void nhoNhat(int arr[], int n)
{
    int nhoNhat = arr[0];
    for (int i = 1; i < n; i++)
        if (nhoNhat > arr[i])
            nhoNhat = arr[i];
    cout << "=> Phan tu nho nhat trong mang tren la: " << nhoNhat <<endl;
}

// hoán vị giá trị 2 biến số
void hoanVi(int &a, int &b)
{
	int temp = a;
	a = b; 
	b = temp;
}

// sắp xếp mảng tăng dần
void sapXepTang(int arr[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] > arr[j])
				hoanVi(arr[i], arr[j]);
		}
	}
}
// sắp xếp mảng giảm dần
void sapXepGiam(int arr[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] < arr[j])
				hoanVi(arr[i], arr[j]);
		}
	}
}


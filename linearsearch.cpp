#include<iostream>
#include<conio.h>
#include<ctime>
#include<cstdlib>
void NhapMang(int* a, int n);
void XuatMang(int* a, int n);
int LinearSearch(int *a, int n, int x);
using namespace std;
int main()
{
	int n,x;
	int b;
	cin >> n;
	int *a = new int[n];
	NhapMang(a, n);
	XuatMang(a, n);
	cout << "\n";
	cout << "nhap so ban muon tim kiem trong mang :";
	cin >> x;
	b = LinearSearch(a, n, x);
	if (b==0)
	{
		cout << "did not find  x in array";
	}
	else
	{
		cout << "vi tri " << b;
	}
	delete a;
}
void NhapMang(int *a,int n)
{
	srand(time(NULL));
	for (size_t i = 0; i < n; i++)
	{
		*(a + i) = rand() % (10 - 0 + 1) - 0;
	}
}
void XuatMang(int *a, int n)
{
	for (size_t i = 0; i < n; i++)
	{
		cout << *(a + i)<<"\t";
	}
}
int LinearSearch(int* a, int n,int x)
{
	int i = 0;
	while (i<n&&*(a+i)!=x)
	{
		i++;
		if (i==n)
		{
			return 0;
		}
	}
	return i;
}
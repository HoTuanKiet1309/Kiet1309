#include<iostream>
#include<math.h>
using namespace std;
void Nhap_Mang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap phan tu a[" << i << "] = ";
		cin >> a[i]; 
	}
}

void Xuat_Mang(int a[], int n)
{
	
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "  ";  
	}
}bool Kiem_Tra_So_Nguyen_To(int n)
{
	if (n < 2)
	{
		return false;
	}
	else
	{
		if (n == 2)
		{
			return true;
		}
		else
		{
			if (n % 2 == 0)
			{
				return false;
			}
			else
			{
				for (int i = 2; i < n; i++)
				{

					if (n % i == 0)
					{
						return false;
					}
				}

			}
		}
	}
	return true;
}



void In_Cac_Phan_Tu_La_So_Nguyen_To(int a[], int n)
{
	
	for (int i = 0; i < n; i++)
	{
		if (Kiem_Tra_So_Nguyen_To(a[i]) == true)
		{
			cout << a[i] << "  ";
		}
	}
}

int main()
{
	int a[100]; 

	int n; 



	do
	{
		cout << "\nNhap so luong phan tu mang: ";
		cin >> n;
		if (n <= 0 || n > 100)
		{
			cout << "\nSo luong phan tu mang vuot qua qui dinh. [1, 100]";
		}
	} while (n <= 0 || n > 100);

	cout << "\n\n\t\t NHAP MANG\n";
	Nhap_Mang(a, n);
	
	cout << "\n\n\t\t XUAT MANG\n";
	Xuat_Mang(a, n);

	cout << "\n\n\t\t CAC SO NGUYEN TO\n";
	In_Cac_Phan_Tu_La_So_Nguyen_To(a, n);
	return 0;
}

#include<iostream>
#include<cmath>
using namespace std;


void Nhapmang(int a[], int& n)
{
    cin >> n;
    for (int i = 0;i < n;i++)
    {

        cin >> a[i];
    }
}int ktdoixung(int a[], int n)
{
    int dem = 0;
    for (int i = 0;i <= n / 2;i++) {
        if (a[i] != a[n - i - 1])
            dem++;
    }
    if (dem == 0)
        return 0;
    else return 1;
}int main() {

    int a[100];
    int n;
    int k, x;
    cin >> k >> x;


    Nhapmang(a, n);
    ktdoixung(a, n);
    if (ktdoixung(a, n))
        cout << "mang doi xung" << endl;
    else cout << "mang khong doi xung" << endl;
    return 0;
}

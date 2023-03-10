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
}void tachMang(int a[], int n) {
    for (int i = 0;i < n;i++) {
        if (a[i] % 2 == 0) cout << a[i] << " ";
    }
    cout << endl;
    for (int i = 0;i < n;i++) {
        if (a[i] % 2 != 0) cout << a[i] << " ";
    }
    cout << endl;
}
int main() {

    int a[100];
    int n;
    int k, x;
    cin >> k >> x;


    Nhapmang(a, n);

    cout << "mang da tach la: ";
    tachMang(a, n);
    return 0;
}

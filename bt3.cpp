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
}
int xoaChiSoK(int a[], int n, int k) {

    if (k < 0 || k >= n) return 0;
    else {

        for (int i = 0;i < n;i++) {

            if (i == k)continue;
            cout << a[i] << " ";
        }
        return 1;
    }
}
int main() {

    int a[100];
    int n;
    int k, x;
    cin >> k >> x;


    Nhapmang(a, n);
    cout << "mang sau khi xoa chi so k: ";
    xoaChiSoK(a, n, k); cout << endl;
}
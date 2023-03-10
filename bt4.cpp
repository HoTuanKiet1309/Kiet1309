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
}void xoagiatrix(int a[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x) continue;

        cout << a[i] << " ";
    }
}
int main() {

    int a[100];
    int n;
    int k, x;
    cin >> k >> x;


    Nhapmang(a, n);
    cout << "mang sau khi xoa x: ";
    xoagiatrix(a, n, x); cout << endl;
    return 0;
}
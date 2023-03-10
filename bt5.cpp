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
int main() {

    int a[100];
    int n;
    int k, x;
    cin >> k >> x;


    Nhapmang(a, n);
    cout << "vi tri cua gia tri am lon nhat la: " << tim(a, n);cout << endl;
    return 0;
}

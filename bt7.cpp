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
}void demMangTang(int a[], int n) {
    int b[1000];
    for (int i = 1;i < n;i++) {
        b[i] = a[i] - a[i - 1];
    }
    int dem = 0;
    for (int i = 1;i < n - 1;i++) {
        if (b[i] <= 0 && b[i + 1] > 0) dem++;
    }
    if (b[1] > 0) cout << (dem + 1);
    else cout << dem;

}

int main() {

    int a[100];
    int n;
    int k, x;
    cin >> k >> x;


    Nhapmang(a, n);
    cout << "so mang con tang la: ";
    demMangTang(a, n);
    return 0;
}

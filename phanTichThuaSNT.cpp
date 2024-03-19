#include <iostream>
using namespace std;

void phanTichSnt (int n)
{
    for (int i = 2; i <= n; i++)
    {
        int dem = 0;
        while (n % i == 0)
        {
            dem++;
            n /= i;
        }
        if (dem != 0)
        {
            cout << i << " ";
            cout << dem << " ";
        }
    }
    cout << endl;
}

int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        phanTichSnt(n);
    }
}
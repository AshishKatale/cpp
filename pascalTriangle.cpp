#include <bits/stdc++.h>
using namespace std;

unsigned long comb(int n, int r)
{
    unsigned long res = 1;
    if (r > n - r)
        r = n - r;
    for (int i = 0; i < r; i++)
    {
        res *= n - i;
        res /= i + 1;
    }
    return res;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << setw(4) << " ";
        }
        for (int j = 0; j < i + 1; j++)
        {
            cout << setw(4) << comb(i, j) << setw(4) << " ";
        }
        cout << "\n";
    }
}

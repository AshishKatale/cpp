#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int A[n][n];
    int x = 1;

    for (int i = 0; i < n; i++)
    {

        // int r=i,c=i;
        int endc = n - i - 1;
        for (int j = i; j < endc; j++)
        {
            A[i][j] = x++;
        }
        int endr = n - i - 1;
        for (int j = i; j < endr; j++)
        {
            A[j][n - i - 1] = x++;
        }
        endc = i;
        for (int j = n - i - 1; j > endc; j--)
        {
            A[n - i - 1][j] = x++;
        }
        endr = i;
        for (int j = n - i - 1; j > endr; j--)
        {
            A[j][i] = x++;
        }
    }
    if (n % 2)
        A[n / 2][n / 2] = x;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout <<setw(3) << A[i][j] << "   ";
        cout << "\n";
    }
}

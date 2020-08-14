/*
Enter length:6
  1     2     3     4     5     6   
 20    21    22    23    24     7   
 19    32    33    34    25     8   
 18    31    36    35    26     9   
 17    30    29    28    27    10   
 16    15    14    13    12    11
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Enter length:";
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
            cout << setw(3) << A[i][j] << "   ";
        cout << "\n";
    }
}

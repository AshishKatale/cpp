/*                                     1    
                                   1       1    
                               1       2       1    
                           1       3       3       1    
                       1       4       6       4       1    
                   1       5      10      10       5       1    
               1       6      15      20      15       6       1    
           1       7      21      35      35      21       7       1    
       1       8      28      56      70      56      28       8       1    
   1       9      36      84     126     126      84      36       9       1 
*/
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
    cout << "Enter integer:";
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

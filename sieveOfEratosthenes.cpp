#include <bits/stdc++.h>
using namespace std;
#define X n + 1
int main()
{
    bitset<10000001> b;
    int n;
    cin >> n;
    b.set();
    for (int i = 2; i * i <= n; i++)
    {
        for (int j = i * i; j <= n; j += i)
            b.reset(j);
    }
    for (int i = 2, j = 1; i <= n; i++)
        if (b.test(i))
        {
            cout << j << " " << i << "\n";
            j++;
        }
}

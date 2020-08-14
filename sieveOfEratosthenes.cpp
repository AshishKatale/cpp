/*
Enter integer:50
Primes upto 50 are:
 2
 3
 5
 7
 11
 13
 17
 19
 23
 29
 31
 37
 41
 43
 47
*/
#include <bits/stdc++.h>
using namespace std;
#define X n + 1
int main()
{
    cout << "Enter integer:";
    bitset<10000001> b;
    int n;
    cin >> n;
    b.set();
    for (int i = 2; i * i <= n; i++)
    {
        for (int j = i * i; j <= n; j += i)
            b.reset(j);
    }
    cout << "Primes upto " << n << " are:\n";
    for (int i = 2; i <= n; i++)
        if (b.test(i))
        {
            cout << " " << i << "\n";
        }
}

// // C++ program to remove spaces using stringstream
// #include <iostream>
// #include <algorithm>
// #include <string>
// #include <vector>
// #include <sstream>
#include <bits/stdc++.h>
using namespace std;
void fact(int n)
{
    string factorial = "1";
    long car = 0;
    while (n)
    {
        int a = n;
        for (char &x : factorial)
        {
            long z = (x - 48) * a + car;
            x = z % 10 + 48;
            car = z / 10;
        }
        while (car)
        {
            factorial += car % 10 + 48;
            car /= 10;
        }
        n--;
    }
    for (auto it = factorial.rbegin(); it != factorial.rend(); it++)
        cout << *it;
}

int main()
{
    cout << "Enter a Positive Integer :";
    int n;
    cin >> n;
    fact(n);
    return 0;
}
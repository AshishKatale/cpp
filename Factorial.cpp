// C++ Program to find large Factorials.
// eg. Factorial of 125 is : 188267717688892609974376770249160085759540364871492425887598231508353156331613598866882932889495923133646405445930057740630161919341380597818883457558547055524326375565007131770880000000000000000000000000000000

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <sstream>
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
    cout << "Enter a Positive Integer : ";
    int n;
    cin >> n;
    cout << "Factorial of " << n << " is : ";
    fact(n);
    return 0;
}

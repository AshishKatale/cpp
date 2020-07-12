// C++ Program to find large Factorials.
// eg. Factorial of 125 is : 188267717688892609974376770249160085759540364871492425887598231508353156331613598866882932889495923133646405445930057740630161919341380597818883457558547055524326375565007131770880000000000000000000000000000000

#include <iostream>
#include <string>
using namespace std;
void fact(int n)
{
    string factorial = "1";
    long carry = 0;
    while (n)
    {
        int a = n;
        for (char &x : factorial)
        {
            long z = (x - 48) * a + carry;
            x = z % 10 + 48;
            carry = z / 10;
        }
        while (carry)
        {
            factorial += carry % 10 + 48;
            carry /= 10;
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

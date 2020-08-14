/*
Enter string: asdfdsaaaadssdaaaw
longest palindromic substring: aaadssdaaa
*/
#include <bits/stdc++.h>
using namespace std;

int pal(const string &s, int i)
{
    int l1 = -1, l2 = 0;
    int l = i, r = i;
    while (l >= 0 && r < s.length() && s[l] == s[r])
    {
        l--;
        r++;
    }
    l1 = r - l - 1;
    l = i, r = i + 1;
    while (l >= 0 && r < s.length() && s[l] == s[r])
    {
        l--;
        r++;
    }
    l2 = r - l - 1;
    return l1 > l2 ? l1 : l2;
}

int main()
{
    cout << "Enter string: ";
    string s;
    int l = 0;
    int n = 0;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        int x = pal(s, i);
        if (x > l)
        {
            l = x;
            n = i;
        }
    }
    cout << "longest palindromic substring: " << s.substr(n - ((l - 1) / 2), l);
}

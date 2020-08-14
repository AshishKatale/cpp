/*
Enter no of layers:5
5  5  5  5  5  5  5  5  5  
5  4  4  4  4  4  4  4  5  
5  4  3  3  3  3  3  4  5  
5  4  3  2  2  2  3  4  5  
5  4  3  2  1  2  3  4  5  
5  4  3  2  2  2  3  4  5  
5  4  3  3  3  3  3  4  5  
5  4  4  4  4  4  4  4  5  
5  5  5  5  5  5  5  5  5
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Enter no of layers:";
    int s;
    cin >> s;
    int n = s * 2 - 1;
    int A[n][n];
    int x = s;

    for (int i = 0; i < s; i++)
    {

        // int r=i,c=i;
        int endc = n - i - 1;
        for (int j = i; j < endc; j++)
        {
            A[i][j] = x;
        }
        int endr = n - i - 1;
        for (int j = i; j < endr; j++)
        {
            A[j][n - i - 1] = x;
        }
        endc = i;
        for (int j = n - i - 1; j > endc; j--)
        {
            A[n - i - 1][j] = x;
        }
        endr = i;
        for (int j = n - i - 1; j > endr; j--)
        {
            A[j][i] = x;
        }
        x--;
    }
    A[n / 2][n / 2] = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << A[i][j] << "  ";
        cout << "\n";
    }
}

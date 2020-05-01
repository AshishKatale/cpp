//C program to check if a number is Kaprekar number or not  
#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
// Returns true if n is a Kaprekar number, else false 
bool iskaprekar(ull n) 
{ 
	if (n == 1) 
	return true; 
ull sq = n*n;
int x= log10(sq)+1;
for(int i=1;i<x;i++){
ull p=(int)(pow(10,i)+0.5);
ull z=sq/p;
ull b=sq%p;
ull m = z+b;
if(z && b) 
if(n==m) return true;
}

	return false; 
} 
 
int main() 
{
    
        cout<<"\n\t Enter Number: ";
        ull i=1;
        cin>>i;
        if (iskaprekar(i)) 
        cout << i << " is Kaprekar number.\n";
        else cout<<i << " is not a Kaprekar number.\n";
            
	return 0; 
} 

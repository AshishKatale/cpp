/*

1
3*2
4*5*6
10*9*8*7
11*12*13*14*15
21*20*19*18*17*16
22*23*24*25*26*27*28
36*35*34*33*32*31*30*29
37*38*39*40*41*42*43*44*45
55*54*53*52*51*50*49*48*47*46

*/



#include<iostream>
using namespace std;
int main()
{
 int a=1,z=1;
  int n;
  cout<<"Enter no. of lines in pattern to be printed: ";
  cin>>n;

  for(int i=1;i<=n;i++)
  {
    int x=i;
    int p=a;
    if(i%2){
    while(x--)
    {

     	cout<<a;
         if((a-p)<(i-1)) cout<<"*";
        a++;
    }
    a+=2*z-1;
    z++;
    }
    else{
    while(x--)
    {
     	cout<<a;
         if((p-a)<(i-1)) cout<<"*"; 
        a--;
    }
    a=p+1;
    }
    cout<<"\n";
  }
}

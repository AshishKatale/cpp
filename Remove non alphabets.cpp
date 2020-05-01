// Remove Non Alphabet characters from string
#include<iostream>
#include<string>
using namespace std;
int main()
{
  //Type your code here.
  string s;
  cin>>s;
  for(int i=0;i<s.length();i++)
  {
    if((s[i]>='a' && s[i]<='z') ||(s[i]>='A' && s[i]<='Z'))
      continue;
  	s.erase(s.begin()+i);
    i--;
  }
  cout<<s;
}

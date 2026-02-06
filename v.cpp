#include<iostream>
#include<string.h>
using namespace std;
int main()
{
  char s[1000001];
  cin>>s;
  for(int i=0;s[i]!='\0' ;i++)
  {
      s=s[i]+s[i+1];
  }
  cout<<s;




}

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
  char a[100001];
  cin>>a;
  int len=strlen(a);
  for(int i=0;i<len;i++)
  {
      if(a[i]==',')
      {
          a[i]=' ';
      }
      else if('a'<=a[i]<='z')
      {
          a[i]=a[i]-32;
      }
      else if('A'<=a[i]<='Z')
      {
        a[i]=a[i]+32;
      }

  }
  cout<<a;
}

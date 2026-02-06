#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char a[1001];
    cin>>a;
    int len=strlen(a);
    int pal=1;
    for(int i=0;i<=len/2;i++)
    {
      if(a[i]!=a[len-i-1])
      {
          pal=0;
      }
    }
    if(pal==1)
    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;

}

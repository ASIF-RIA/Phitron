#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
     char a[101];
    for(int i=0; i<t; i++)
    {

        cin>>a;
        int len;
    len=strlen(a);
    if(len>10)
    {
        cout<<a[0];
        int num=len-2;
        cout<<num;
        cout<<a[len-1]<<endl;
    }
    else
    {
        cout<<a<<endl;
    }
    }





}

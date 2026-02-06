#include<iostream>
#include<string.h>
using namespace std;
int main()
{

    char a[100];
    char b[100];
    cin>>a>>b;

    int n=strlen(a);
    int m=strlen(b);
    for(int  i=0;i<m;i++)
    {
        a[n]=b[i];
        n++;
         cout<<a[i];
    }



}

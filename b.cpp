#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a,b;
    a=n/10;
    b=n%10;
    if(b==0)
    {
        cout<<"YES"<<endl;
    }
    else if(a%b==0||b%a==0)
    {
        cout<<"YES"<<endl;
    }
     else
     {
         cout<<"NO"<<endl;
     }
     return 0;
}

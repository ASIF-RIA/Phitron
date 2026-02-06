#include<iostream>
using namespace std;
int main()
{
    int n,a=0,b=0,c=0,d=0;
    cin>>n;
    int  arr[10];
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
    }



    for(int i=1; i<=n; i++)
    {
        if(arr[i]%2==0)
        {
            a++;
        }
        else
        {
            b++;
        }

    }



    for(int i=1; i<=n; i++)
    {
        if(arr[i]>0)
        {
            c++;
        }

    }
    for(int i=1; i<=n; i++)
    {
        if(arr[i]<0)
        {
            d++;
        }

    }

    cout<<"Even:"<<a<<endl;
    cout<<"Odd:"<<b<<endl;
    cout<<"Positive:"<<c<<endl;
    cout<<"Negative:"<<d<<endl;

}

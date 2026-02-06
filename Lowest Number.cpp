#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
    int n,s=1;
    cin>>n;
    int arr[n];
    for( int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int mn=INT_MAX,pos;
    for( int i=0;i<n;i++)
    {
        if(arr[i]<mn)
        {
            pos=i+1;
            mn=arr[i];



        }
    }
    cout<<mn<<" "<<pos;
}

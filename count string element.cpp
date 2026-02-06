#include<iostream>

using namespace std;
int main()
{
    int n,s,r;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int mini=arr[0];
    for(int i=0;i<n;i++)
    {
       if(mini>arr[i])
       {
           s=i;
       }
    }
    int maxx=arr[0];
    for(int i=0;i<n;i++)
    {
        if(maxx<arr[i])
        {
            r=i;
        }
    }
    int temp=0;
    temp=arr[s];
    arr[s]=arr[r];
    arr[r]=temp;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}

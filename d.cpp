#include<iostream>

using namespace std;
int main()
{
    int n,s;
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
           mini=arr[i];
         s=i;
       }
    }
    cout<<mini<<endl;
    cout<<s;
}

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count=0,one=0;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            count++;
        }
        else if(arr[i]==1)
        {
            one++;
        }
    }
    cout<<"zero-"<<count<<endl;
    cout<<"one-"<<one<<endl;

}

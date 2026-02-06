#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n;
    int a[n];
    cout<<"Array a";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>m;
    int b[m];
    cout<<"array b";
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    int ans[n+m];
    for(int i=0;i<=n;i++)
    {
        ans[i]=a[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }
}

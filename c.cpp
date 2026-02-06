#include<iostream>
using namespace std;
int main()
{
      int n;
    cin>>n;
    long long int arr[n];
     int sum;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
       sum=sum+arr[i];
    }
      if(sum<0)
      {
          sum=sum*(-1);
      }
        cout<<sum<<endl;


}

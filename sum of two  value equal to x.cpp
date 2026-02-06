#include<iostream>
using namespace std;
int main()
{

    int x=20,sum=0;
    cout<<"Enter the length of array"<<endl;
    int n;
    int arr[5];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        for( int j=0;j<n;j++)
        {
            sum=arr[i]+arr[j];
            j++;
        }
        if(sum==x)
        {
            cout<<"sum is equavalent";
        }
        i++;
    }


}

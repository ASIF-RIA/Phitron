#include<iostream>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int b=n%10;
   int a=n/10;
   if(a/b==0)
   {
       cout<<"YES"<<endl;
   }
   else
   {
       cout<<"NO"<<endl;
   }


    return 0;
}

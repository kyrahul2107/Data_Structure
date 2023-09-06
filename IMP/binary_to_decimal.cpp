#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,bit,ans=0,i=0;
    cin>>n;
    while (n!=0)
    {
        bit=n%10;
        ans=ans+bit*pow(2,i);
        n=n/10;
        i++;
    }
    
   cout<<ans;
   return 0;
}
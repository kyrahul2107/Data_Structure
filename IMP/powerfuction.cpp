#include<iostream>
#include<conio.h>
using namespace std;
int powerfun(int a,int b)
{
    int ans=1;
    for(int i=1;i<=b;i++)
    {
        ans=ans*a;
    }
 return ans;
}
int main()
{
    int a,b,c;
    cout<<"enter the number and power of number";
    cin>>a>>b;
    c=powerfun(a,b);
    cout<<c; 
}
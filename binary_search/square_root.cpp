#include<iostream>
using namespace std;
int findsquareroot(int n)
{
    int start=0,end=n;
    int ans=0;
    int mid=start+(end-start)/2;
    while(start<end)
    {
        if((mid*mid)==n)
        {
            return mid;
        }
        else if((mid*mid)<n)
        {   
            ans=mid;
            start=mid+1;
        }
        else((mid*mid)>n);
        {
            end=mid-1;
            mid=start+(end-start)/2;
        }
    }
 return ans;
}
int precision(int ans,int precision,int tempsolution)
{
    double factor=1;
    int ans=tempsolution;
    for(int i=0;i<precision;i++)
    {
        factor=factor/10;
    for(double j=ans;j*j<ans;j=j+factor)
    {
        ans=j;
    }
    }
    return ans;
}
  int main()
  {
    int num;
    cout<<"enter the number to calculate";
    cin>>num;
    int tempans=findsquareroot(num);
    cout<<findsquareroot(num);
    cout<<"Precise answer is" ;
    cout<<precision( num,2,tempans);
    return 0;
  }
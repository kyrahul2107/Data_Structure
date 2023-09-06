#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,count=0,final;
    cin>>n;
    while (n!=0)
    {
        if(n&1)
        {
          count++; 
        }
        n=n>>1;
    }
     return count;
}
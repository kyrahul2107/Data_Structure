#include<iostream>
#include<conio.h>
using namespace std;
 bool primefun(int a)
 {
    for(int i=2;i<a;i++)
    {
        if(a%i==0)
        {
            return 0;
        }
        
    }
    return 1;
 }
int main()
{   
    int a;
    cin>>a;
    if(primefun(a))
    {
        cout<<"prime number";
    }
     else
     {
        cout<<"not a prime number";

     }


}
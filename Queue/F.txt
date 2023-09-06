#include<iostream>
using namespace std;
int main()
{
   int forward,temp ,backward,reach,distance=0,time=0;
   cout<<"enter the length of the well"<<" "<<endl;
   cin>>reach;
   cout<<"enter the forward distance covered by frog"<<" "<<endl;
   cin>>forward;
   cout<<"enter the backward distance covered by frog"<<" "<<endl;
   cin>>backward;
   while(distance<=reach-forward)
   {
     temp=forward-backward;
     distance=distance+temp;
     time++;
   }
   cout<<" The time taken by the frog to come out the well is "<<" "<<time<<endl;
   return 0;

}
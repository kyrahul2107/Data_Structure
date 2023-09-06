#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,c,notes;
    cout<<"enter the currency amount";
     cin>>n;
    cin>>c;
    switch(c){
     case 100:
     notes=n/c;
     cout<<notes;
     break;
     case 50:
     notes=n/c;
     cout<<notes;
     break;
     case 20:
     notes=n/c;
     cout<<notes;
     break;
     case 10:
     notes=n/c;
     cout<<notes;
     break;
     case 1:
     notes=n/c;
     cout<<notes;
     default:
     cout<<"error";


      
    }

   return 0;
}


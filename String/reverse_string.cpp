#include<iostream>
#include<string.h>
using namespace std;


//reverse string 
void reverse(  string str,int n)
{
   int s=0;
   int e=n-1;
   while (s<e)
   {
    swap(str[s++],str[e--]);
   }
   cout<<str<<endl;
}





int main()
{
    string str,l;
    cout<<"enter the string::";
    getline (cin, str);
    cout<<"the lenght of the strig is::"<<endl;
    cout<<str.length()<<endl;
   reverse( str,str.length());
    return 0;
}
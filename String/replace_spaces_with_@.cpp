#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

string replace( string str)
  {
    string temp;
    for( int i=0;i<str.length();i++)
  
  {
     if(str[i]==' ')
     {
      temp.push_back('@');
     }
     else{
      temp.push_back(str[i]);
     }
  } 
  return temp;
}



int main()
{
    string str;
    cout<<"enter the string::";
    getline (cin, str);
    cout<<"replace spaces string is::";
    cout<<replace(str)<<endl;
    return 0;
}
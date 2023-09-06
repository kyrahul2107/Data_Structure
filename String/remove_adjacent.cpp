#include<iostream>
#include<vector>
#include<string.h>
using namespace std;
string remove_adjcent(string str)
{
    int i=0;
    while(str[i]!='\0')
    {
        if(str[i]==str[i+1])
        {
            
            str.erase(i, i+1);
            i=i-1;
        }
        {
            i++;
        }
    }
   return str;
}





int main()
{
    string str;
    cout<<"enter the string::";
    getline (cin, str);
    cout<<"replace spaces string is::";
    cout<<remove_adjcent(str)<<endl;
    return 0;
}
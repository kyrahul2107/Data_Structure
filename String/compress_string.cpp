#include<iostream>
#include<string.h>
#include<vector>
using namespace  std;

int compression(string str)
{
int ansindex=0;
int i=0,j=i+1,count=0;
int n=str.size();
while (i<n)
{
    while(j<n&&str[i]==str[j])
    {
        j++;
    }
    str[ansindex++]=str[i];
    count=j-i;
    if(count>1)
    {
        string cnt=to_string(count);
        for(char ch:cnt)
        {
            str[ansindex++]=ch;
        }
    }
    i=j;
}
return ansindex;

}



int main()
{
    string str;
    cout<<"enter the string::";
    getline (cin, str);
    cout<<compression(str)<<endl;
    cout<<endl;
    
    return 0;
}
#include<iostream>
using namespace std;
void update(int a[],int n)
{
    a[0]=120;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" "<<endl;

    }
cout<<"going back to main function";
}

int main()
{
    int a[10]={1,2,3},n;
    cout<<"enter the size of array";
    cin>>n;
    update(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
     }

}
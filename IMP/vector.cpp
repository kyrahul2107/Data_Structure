#include<iostream>
#include<conio.h>
#include<vector>
using namespace std;
int main()
{
    vector<int>v1;
   cout<<"current capacity is::"<<v1.capacity()<<endl;
   /* v1.push_back(10);
    cout<<"current capacity is::"<<v1.capacity()<<endl;
    v1.push_back(20);
    cout<<"current capacity is::"<<v1.capacity()<<endl;
    v1.push_back(30);
    cout<<"current capacity is::"<<v1.capacity()<<endl;*/
    for(int i=0;i<10;i++)
    {
        v1.push_back(10*(i+1));

    }
    cout<<"current capacity is::"<<v1.capacity()<<endl;
    v1.pop_back();
    cout<<"current capacity is::"<<v1.capacity()<<endl;
    v1.pop_back();
    cout<<"current capacity is::"<<v1.capacity()<<endl;
    v1.pop_back();
    cout<<"current capacity is::"<<v1.capacity()<<endl;
    v1.pop_back();
    cout<<"current capacity is::"<<v1.capacity()<<endl;
    v1.pop_back();
    cout<<"current capacity is::"<<v1.capacity()<<endl;
    v1.pop_back();
    cout<<"current capacity is::"<<v1.capacity()<<endl;
    v1.pop_back();
    cout<<"current capacity is::"<<v1.capacity()<<endl;
    v1.pop_back();
    cout<<"current capacity is::"<<v1.capacity()<<endl;
    v1.pop_back();
    cout<<"current capacity is::"<<v1.capacity()<<endl;
    v1.pop_back();
    cout<<"current capacity is::"<<v1.capacity()<<endl;
    v1.pop_back();
    cout<<"current capacity is::"<<v1.capacity()<<endl;
    v1.pop_back();
    cout<<"current capacity is::"<<v1.capacity()<<endl;
    v1.pop_back();
    cout<<"current capacity is::"<<v1.capacity()<<endl;
    v1.pop_back();
    cout<<"current capacity is::"<<v1.capacity()<<endl;
    v1.pop_back();
    cout<<"current capacity is::"<<v1.capacity()<<endl;
    v1.pop_back();
    cout<<"current capacity is::"<<v1.capacity()<<endl;
    v1.pop_back();
    cout<<"current capacity is::"<<v1.capacity()<<endl;
    v1.pop_back();
   // cout<<v1<<endl;
    cout<<v1.front()<<endl;
    cout<<v1.back()<<endl;
}
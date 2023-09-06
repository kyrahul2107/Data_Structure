#include<iostream>
using namespace std;

class Subject
{
    public:
    int marks1;
    int marks2;
    public:
    Subject(int m1,int m2)
    {
        marks1=m1;
        marks2=m2;
    }
    void sum()
    {
        cout<<"Sum is"<<marks1+marks2<<endl;
    }
};
class ExtraSub :public Subject{
    public:
    int marks1;
    int marks2;
    ExtraSub(int m1,int m2)
    {
        marks1=m1;
        marks2=m2;
    }
    void sum()
    {
    
        cout<<"sum in child class"<<endl;
        cout<<marks1+marks2;  
  }


};
int main()
{
    Subject s= new Subject(3,4);

}
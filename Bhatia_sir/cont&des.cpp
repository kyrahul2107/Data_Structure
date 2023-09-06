#include<iostream>
using namespace std;

class parent
{
    public:
    parent()
    {
        cout<<"parent costructor called"<<endl;
    }
    private:
    ~parent()
    {
        cout<<"parent desstructor called"<<endl;
    }
};
class child:private parent
{
    public:
    child()
    {
        cout<<"child constructor"<<endl;
    }
    ~ child()
    {
        cout<<"child desstructor"<<endl;
    }
};
class child2:public child
{
    public:
     child2()
    {
        cout<<"child2 constructor"<<endl;
    }
    ~ child2()
    {
        cout<<"child2 desstructor"<<endl;
    }
};
int main()
{
    child2 c2;
}
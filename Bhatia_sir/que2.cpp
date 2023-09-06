#include<iostream>
using namespace std;
class Emp
{
    private:
    int eid;
    string ename;
    int salary;
    public:
    // constructor creation
    Emp()
    {
        eid=0;
        ename='\0';
        salary=0;
        cout<<"Constructor executed"<<endl;
    }
    ~ Emp()
    {
        cout<<"Destructor executed"<<endl;
    }
    void setEid(int eid)
    {
        this->eid=eid;
    }

    void setEname(string ename)
    {
        this->ename=ename;
    }
    void setEsalary(int salary)
    {
        this->salary=salary;
    }
    int getEid()
    {
        return eid;
    }
    string getEname()
    {
        return ename;
    }
    int getEsalary()
    {
        return salary;
    }
    void searchRecordByEname(Emp e)
    {
        cout<<"name of the employee is"<<e.ename <<endl;
      cout<<"Salary of the employee is "<<e.salary <<endl;
       cout<<"id of the employee is"<<e.eid<<endl;
    }
   int maxSalary(Emp *e1,int n)
    {
        int maxi=0;
        for(int i=0;i<n;i++)
        {
           maxi=max(e1[i].salary,maxi);
        }
        return maxi;
    }

};
int main()
{
    // creating object of the class Emp as an array
    Emp e[4];
    int id;
    string name;
    int salary;
   /* for(int i=0;i<2;i++)
    {
        cout<<"enter the emp id"<<endl;
        cin>>id;
        e[i].setEid(id);
        cout<<"enter the emp name"<<endl;
        cin>>name;
        e[i].setEname(name);
        cout<<"enter the emp sal"<<endl;
        cin>>salary;
        e[i].setEsalary(salary);
    }*/
    
    cout<<e[1].getEid()<<endl;
    cout<<e[1].getEname()<<endl;
    cout<<e[1].getEsalary()<<endl;
    
    return 0;
    
}
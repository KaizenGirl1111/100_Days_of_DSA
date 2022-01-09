#include<iostream>
#include<string>
using namespace std;
class Employee
{
    private:
    int eid;
    string name;
    public:
    Employee(int e,string n)
    {
        eid=e;
        name=n;
    }
    int getEmployeeID(){return eid;}
    string getName(){return name;}

};
class FullTimeEmployee:public Employee
{
    private:
    int salary;
    public:
    FullTimeEmployee(int e,string n,int s):Employee(e,n)
    {
        salary=s;
    }
    int getSalary(){return salary;}
};
class PartTimeEmployee:public Employee
{
    private:
    int wage;
    public:
    PartTimeEmployee(int e,string n,int w):Employee(e,n)
    {
     wage=w;
    }
    int getWage(){return wage;}
};
int main()
{
    FullTimeEmployee e1(1,"Rohan",25000);
    PartTimeEmployee e2(2,"Soham",3000);
    cout<<"salary of "<<e1.getName()<<" is "<<e1.getSalary()<<endl;
    cout<<"salary of "<<e2.getName()<<" is "<<e2.getWage()<<endl;
}
#include<iostream>
using namespace std;
class Base
{
public:
Base(){cout<<"non-param of base";}
Base(int x){cout<<"param of base"<<x<<endl;}
//int a;
//void display()
//{
//    cout<<"Display of base"<<a<<endl;
//}

};
class Derived:public Base
{
    public:
    Derived(){cout<<"non-param of derieved";}
    Derived(int y){cout<<"param of derieved"<<y<<endl;}
    Derived(int x,int y):Base(x)
    {
        cout<<"param of derieved and base"<<y<<endl;
    }

    //void show()
    //{
      //  cout<<"show of derived";
   // }

};
int main()
{
    //Derived d(10);
    Derived d(5,10);
    
    //d.a=100;
    //d.display();
    //d.show();
}

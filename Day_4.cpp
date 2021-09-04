//call by reference
#include<iostream>
using namespace std;
void swap(int *a, int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
//call by address
void swapp(int &a, int &b)
{
    int temp;
    temp=a;
     a=b;
    b=temp;
}


int main()
{
    int x=10,y=20,u=30,v=40;
    swap(&x,&y);
    cout<<x<<' '<<y<<endl;
    swapp(u,v);
    cout<<u<<' '<<v;
}

#include<iostream>
using namespace std;
class complex 
{
    private:
    int real;
    int img;
    public:
    complex(int i=0,int r=0)
    {
        real=r;
        img=i;
    }
    friend ostream &operator<<(ostream &out,complex &c);
};
ostream &operator<<(ostream &out,complex &c)
{
    out<<c.real<<"+i"<<c.img;
    return out;
}
int main()
{
    complex c1(10,5);
     cout<<c1<<endl;
     operator<<(cout,c1);
}

#include<iostream>
#include<string>
using namespace std;
class complex
{
    private:
        int img;
        int real;
    public:
    complex(int r=0,int i=0)
 {
 real=r;
 img=i;
 }
       friend complex operator+(complex c1,complex c2);
       void display()
       {
           cout<<real<<"+i"<<img;
       }
};
complex operator+(complex c1,complex c2)
{complex temp;
      temp.img=c1.img+c2.img;
      temp.real=c1.real+c2.real;
      return temp;
}

int main()
{
   complex c1(10,5), c2(2,3),c3;
   c3=c1+c2;
   c3.display();
}
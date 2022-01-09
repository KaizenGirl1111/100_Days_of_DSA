#include<iostream>
using namespace std;
class Rectangle{
    private:
float length;
float breadth;
public:
Rectangle();
//{
    //length=1;
    //breadth=1;
//}
Rectangle(float a,float b);
//Rectangle(float l=1,float b=1)
//{
//    setLength(l);
//    setBreadth(b);
//}
Rectangle(Rectangle &r);
//{
//    length=r.length;
//    breadth=r.breadth;
//}
void setBreadth(float b);
//{if(b>=0)
//{
//    breadth=b;
//}
//else{
//    breadth=0;
//    cout<<"breadth can't be negative";
//}
//}

void setLength(float l);
//{if(l>=0)
//{
//    length=l;
//}
//else{
//      length=0;
//    cout<<"length can't be negative";
//}
//}
float getBreadth()
{
   return breadth;
}
float getLength()
{
   return length;
}
float area();
//{
  // float  a=length*breadth;
  // return a;
//}
float perimeter();
//{
 //   float p=2*(length+breadth);
 //   return p;
//}
bool isSquare();
~Rectangle();

    };
    class Cuboid:public Rectangle{
        private:
        int height;
        public:
        Cuboid(int h)
        {
            height=h;
        }
        int getHeight()
        {
            return height;
        }
        void setHeight(int h)
        {
           height = h;
        }
        int volume()
        {
            return height*area();
        }
    };
    int main()
    { 
         Rectangle r1(10,2);
         Rectangle r2(r1);
         Rectangle *p=new Rectangle;
          cout<<r2.area()<<endl;
          p=&r1;
          p -> setLength(10);
          p -> setBreadth(20);
           cout<<p->area()<<' '<<p->perimeter()<<endl;
           cout<<r1.isSquare();
         return 0;
    }
    Rectangle::Rectangle()
    {
          length=1;
          breadth=1;
         }
Rectangle::Rectangle(float l,float b)
{
    setLength(l);
   setBreadth(b);
}
Rectangle::Rectangle(Rectangle &r)
{
    length=r.length;
    breadth=r.breadth;
}
void Rectangle::setBreadth(float b)
{if(b>=0)
{
    breadth=b;
}
else{
      breadth=0;
   cout<<"length can't be negative";
}
}
void Rectangle::setLength(float l)
{if(l>=0)
{
   length=l;
}
else{
      length=0;
    cout<<"length can't be negative";
}
}
float Rectangle::area()
{
   float  a=length*breadth;
  return a;
}
float Rectangle::perimeter()
{
    float p=2*(length+breadth);
   return p;
}
bool Rectangle:: isSquare()
{
    return length==breadth;
}
Rectangle::~Rectangle()
{
    cout<<"rectangle is destroyed";
}


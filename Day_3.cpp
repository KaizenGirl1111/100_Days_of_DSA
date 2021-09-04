//functional template
#include<iostream>
using namespace std;


//write a Max() function template for 2 numbers
//default argument
//pass by value, in void f anfter calling not swap happens
template<class T>
T maxim( T x,T y)
{
  return x>y?x:y;
}
template<class T>
int three(T x, T y=0,T z=0)
{
    return ((x>y && x>z)?x:(y>z?y:z));
}
void swap(int x=0, int y=0)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    
}

int main()
{
    cout<<maxim(3.2f,4.43f)<<endl;
    cout<<maxim('r','s')<<endl;
    cout<<three(5.5f)<<endl;
    int a=3, b=4;
    swap(a,b);
    cout<<a<<b<<endl;
}

//why is it not coming in float??
//why is it getting swapped??



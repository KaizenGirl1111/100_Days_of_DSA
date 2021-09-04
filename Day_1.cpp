#include<iostream>
using namespace std;

int pow(int m, int n)
{
    int z =1;
    for(int i=0; i<n; i++)
    {
        z = z * m;
    }
    return z;
}
//write a pow() function here 

int main()
{
    cout<<pow(2,5);
}
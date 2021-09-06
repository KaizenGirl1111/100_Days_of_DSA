#include<iostream>
using namespace std;
//structure to return values from minmax
struct Pair{
    int min;
    int max;
};
struct Pair getMinMax(int arr[],int n)
{
    struct Pair minmax;
    int i;
    if(n==1)
    {
        minmax.min=arr[0];
        minmax.max=arr[0];
        return minmax;
    }
    if(arr[0]>arr[1])
    {
        minmax.max=arr[0];
        minmax.min=arr[1];
    }
    else if(arr[1]>arr[0])
    {
        minmax.max=arr[1];
        minmax.min=arr[0];
    }
    //for more than 2 elements
    for(i=2;i<n;i++)
    {
        if(arr[i]>minmax.max)
            minmax.max=arr[i];
        else if(arr[i]<minmax.min)
            minmax.min=arr[i];
    }
    return minmax;
}

    //main function
    int main()
    {
        int arr[]={1,2,3,5656,2323233};
        int size=5;
        struct Pair minmax=getMinMax(arr,size);
        cout<<"Minimum element is"<<
        minmax.min <<endl;
        cout<<"Maximum element is"<<
        minmax.max <<endl;
        return 0;
    }

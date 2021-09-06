#include<iostream>
using namespace std;
//Iterative function to reverse an Array
void reverseArray(int arr[],int start,int end){
    while(start<end)
    {
        int temp;
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
//function to print an array
void printArray(int arr[],int size){
for(int i=0;i<size;i++)
{
    cout<<arr[i];
}
}
//main function
int main()
{
   int arr[]={1,2,3,4,5};
   int size= sizeof(arr)/sizeof(arr[0]);
   cout<<"Original array is"<<endl;
   printArray(arr,size);
   cout<<endl;
   cout<<"reversed array is"<<endl;
   reverseArray(arr,0,size-1);
   printArray(arr,size);
  return 0;
}
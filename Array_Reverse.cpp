//Reversing Array
#include <iostream>
using namespace std;

void ArrayReverse(int a[],int n);
int main()
{
    int arr[] = {5,7,-2,10,22,-2,0,5,37};
    int size = sizeof(arr)/sizeof(int);
    int num;
    cout<<"Original Array: ";
    for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";
    cout<<"Reverse of Array: ";
    ArrayReverse(arr,size); 
    return 0;
}
void ArrayReverse(int a[],int n)
{
    int i,j;
    int temp;
    for(i=0,j=n-1; i<j;i++,j--)
    {
        temp = a[i];    //we can use swap(val1,val2) functions too 
        a[i] = a[j];
        a[j] = temp;
    }
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
}
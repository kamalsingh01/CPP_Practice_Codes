#include <iostream>

using namespace std;

void swapAlternate(int arr[], int n)
{
    int i;
    for(i=0;i<n;i+=2)
    {
        if((i+1)<n)
            swap(arr[i],arr[i+1]);
    }
    cout<<"\nAfter Alternate swap: ";
    for(i=0;i<n;i++)
        cout<<arr[i]<<"\t";
}

int main()
{   
    int n,i;
    int arr[30] ;
    cout<<"Enter the number of elements: ";
    cin>>n;
    cout<<"Enter the array elements: ";
    for(i=0;i<n;i++)
        cin>>arr[i];
    swapAlternate(arr,n);
    return 0;
}
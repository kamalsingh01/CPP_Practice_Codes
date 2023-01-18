//Sum of Array elements
#include <iostream>
using namespace std;
int arraySum(int a[], int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
        sum+=a[i];
    return sum;
}

int main()
{
    int i,size,sum=0;
    int arr[100];
    cout<<"Enter the size of array: ";
    cin>>size;
    cout<<"Enter the elements:\n";
    for(i=0;i<size;i++)
        cin>>arr[i];
    cout<<"Sum of all array elements: "<<arraySum(arr,size);
    return 0;
}
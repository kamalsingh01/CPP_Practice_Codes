// SORT 0 AND 1 PRESENT IN AN ARRAY
#include <iostream>
using namespace std;

int main()
{
    int ar[30];
    int size,i,j;
    cout<<"Enter the size of array: ";
    cin>>size;
    cout<<"Enter the array elements:\n";
    for(i=0;i<size;i++)
        cin>>ar[i];
    i=0;

    j=size-1;
    while(i<j)
    {
        if(ar[i]>ar[j])
        {
            swap(ar[i],ar[j]);
        }
        i++;j--;
    }
    for(i=0;i<size;i++)
        cout<<ar[i]<<" ";
    return 0;
}
//FINDING ONE UNIQUE ELEMENT OF THE ARRAY
// Size is N, where N=2M+1 and 'M' number of elements are present twice, also N is mostly Odd.

#include <iostream>
using namespace std;

int main()
{
    int ar[30];
    int size,i;
    
    cout<<"Enter the size of array: ";
    cin>>size;
    cout<<"Enter the array elements:\n";
    for(i=0;i<size;i++)
        cin>>ar[i];
    int x=0;
    for(i=0;i<size;i++)
        x=x^ar[i];      // a^a=0  & a^0=a
    cout<<"\nUnique element: "<<x;
    return 0;
}

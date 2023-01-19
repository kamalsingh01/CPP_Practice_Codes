// FIND PAIR OF ELEMENTS WHICH SUMS TO A NUMBER PRESENT IN THE ARRAY
#include <iostream>
using namespace std;

int main()
{
    int ar[30];
    int size,i;
    int x;   
    cout<<"Enter the size of array: ";
    cin>>size;
    cout<<"Enter the array elements:\n";
    for(i=0;i<size;i++)
        cin>>ar[i];
    cout<<"enter the sum number: ";
    cin>>x;
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if((ar[i]+ar[j])==x)
            {
                if(ar[i]>=ar[j])
                    cout<<ar[j]<<","<<ar[i]<<endl;
                else
                    cout<<ar[i]<<","<<ar[j]<<endl;
            }
        }
    }
    return 0;
}
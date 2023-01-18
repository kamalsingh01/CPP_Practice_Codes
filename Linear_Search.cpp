//Linear Search
#include <iostream>
using namespace std;

int LSearch(int a[],int n,int key);
int main()
{
    int arr[] = {5,7,-2,10,22,-2,0,5,37,1};
    int size = sizeof(arr)/sizeof(int);
    int num;
    for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";
    cout<<"\nEnter the number to be searched: ";
    cin>>num;
    if(LSearch(arr,size,num))
        cout<<num<<" is present";
    else
        cout<<num<<" not present";
    return 0;
}
int LSearch(int a[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(key==a[i])
            return 1;
    }
    return 0;
}
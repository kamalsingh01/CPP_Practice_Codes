//INTERSECTION OF TWO SORTED ARRAYS
#include <iostream>
using namespace std;

void ArrayIntersect(int[] ,int[] ,int ,int );

int main()
{
    int size1,size2;
    int ar1[100],ar2[100];
    int i;
    //array1 Input
    cout<<"Enter the size of first array:";
    cin>>size1;
    cout<<"Enter the elements(ascending order):\n";
    for(i=0;i<size1;i++)
        cin>>ar1[i];
    //array2 Input
    cout<<"Enter the size of second array:";
    cin>>size2;
    cout<<"Enter the elements(ascending order):\n";
    for(i=0;i<size2;i++)
        cin>>ar2[i];
    cout<<"\nArray Intersection: ";
    ArrayIntersect(ar1,ar2,size1,size2);
    return 0;
}

void ArrayIntersect(int ar1[],int ar2[],int n1,int n2)
{  
    for(int i=0;i<n1;i++)
    {
        int element=ar1[i]; 
        for(int j=0;j<n2;j++)
        {
            if(ar2[j]>element)
                break;
            if( element==ar2[j] )
            {
                cout<<element<<" ";
                ar2[j] = INT16_MIN;
                break;
            }
        }
    }
}
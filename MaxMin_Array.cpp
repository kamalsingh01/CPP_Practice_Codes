//Maximum and Minimum of an array

#include <iostream>

using namespace std;

int getMax(int a[], int size)
{
    int max = INT32_MIN;
    for(int i=0;i<size;i++)
    {
        if(a[i]>max)    //or  max_num = max(max_num,a[i]);
            max=a[i];
    }
    return max;
}
int getMin(int a[], int size)
{
    int min_num = INT32_MAX;
    for(int i=0;i<size;i++)
    {
        min_num = min(min_num,a[i]);
        //if(a[i]<min)  
        //    min=a[i];
    }
    return min_num;
}
//main function
int main()
{
    int size;
    cout<<"Enter the size: ";
    cin>>size;
    // int num[size];  //Bad Practice, better make a large size array
    int num[100];
    for(int i=0;i<size;i++)
        cin>>num[i];
    cout<<"\nMaximum Number: "<<getMax(num,size);
    cout<<"\nMinimum Number: "<<getMin(num,size);
    cout<<"\nEverything is okay";
    return 0;
}
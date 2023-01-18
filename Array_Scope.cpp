//Array SCOPE
#include <iostream>
using namespace std;

//If any function taking an array as parameter updates anything in it will make affect the original array in main()
void update(int a[], int n)
{
    cout<<"\nInside update()"<<endl;
    //updating array  -actual array is getting updated
    a[0]=120; //*(a+0) = 120 
    cout<<"Going back to main()"<<endl;
}
int main()
{
    int ar[3] = {2,6,3};
    cout<<"Before Update\n";
    for(int i=0;i<3;i++)
        cout<<ar[i]<<"\t";
    update(ar,3); //base address of the array is passed to update(), whole array is not passed

    //printing array
    cout<<"After Update\n";
    for(int i=0;i<3;i++)
        cout<<ar[i]<<"\t";
    return 0;
}
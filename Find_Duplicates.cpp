//FIND DUPLICATES IN AN ARRAY
/*********************************************************************************************************************
 * Array Size is 'N' containing each number between 1 and N-1 atleast once. There is a single value thet is present in \
 * the array twice.
 * Find the duplicate element.
 * HINT:  There is only one duplicate element present. 
 *        If the size of array is 7 then all the numbers less than 7 will be present in the array atleast once and 
 *        only one number will be duplicated
 *
************************************************************************************************************************/
#include <iostream>
using namespace std;

int findDuplicate(int a[],int n)
{
    // int i,x=0;
    // for(i=0;i<n;i++)
    //     x=x^a[i];
    // for(i=1;i<n;i++)
    //     x=x^i;
    // return x;

    int sum = 0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
	return (sum - (n*(n-1)/2));
}

int main()
{
    int size,i,ar[100];
    cout<<"Enter the size:";
    cin>>size;
    cout<<"Enter the elements(value<size):\n";
    for(i=0;i<size;i++)
        cin>>ar[i];
    cout<<"Duplicate element: "<<findDuplicate(ar,size);
    return 0;
}


/**********************************
 * Approach 1: [1,2,3...X..N-1]^X^[1,2,3...X..N-1] i.e. a^a=0 and 0^a=a
 * Approach 2:  Sum all the elements and substract it with sum of first(N-1) natural number.
 * 
*/
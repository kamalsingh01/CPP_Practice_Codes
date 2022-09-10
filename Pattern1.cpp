/*****************************************************************
 * IMP POINTS: 
 * 1. Outer loop kaha se kaha tk chalega
 * 2. Inner loop kaha se kaha chalega
 * 3. Print kya or kaise krana h.
 * 4. If number of elements in a row is equal to row number, then inner loop will run till row number.
 * 5. n-j+1 -> Printing numbers in reverse order.
 * 6. if first element of row is related to row number means there is an involment of row number in inner loop
 * 7. if elements of pattern are changing, try to focus on changing varibales in the program amd make use of them.
 * 8. for square patterns, row=1->n & col=1->n
 * 9. for triangular patterns, row=1->n & col=1->row.
 * 
*/

#include <iostream>

using namespace std;

int main()
{
    int n,m,i,j;
    //suite1
    cout<<"------------------Pattern1-----------------";
    i=0;
    n=4;
    cout<<"\n n="<<n<<endl;
    while(i<n)
    {
        j=0;
        while(j<n)
        {
            cout<<" * ";
            j=j+1;
        }
        cout<<endl;
        i+=1;
    }
    //suite2
    cout<<"------------------Pattern2-----------------";
    i=1;
    n=4;
    cout<<"\n n="<<n<<endl;
    while(i<=n)
    {
        j=0;
        while(j<n)
        {
            cout<<i<<" ";
            j=j+1;
        }
        cout<<endl;
        i+=1;
    }
    //suite3
    cout<<"------------------Pattern3-----------------";
    i=1;
    n=4;
    cout<<"\n n="<<n<<endl;
    while(i<=n)
    {
        j=1;
        while(j<=n)
        {
            cout<<j<<" ";
            j=j+1;
        }
        cout<<endl;
        i+=1;
    }
    //suite4**
    cout<<"-----------------Pattern4-----------------";
    i=1;
    n=4;
    cout<<"\n n="<<n<<endl;
    while(i<=n)
    {
        j=1;
        while(j<=n)
        {
            cout<<n-j+1<<" ";
            j=j+1;
        }
        cout<<endl;
        i+=1;
    }
    //suite5
    cout<<"-----------------Pattern5-----------------";
    i=1;
    n=4;
    int count = 0;
    cout<<"\n n="<<n<<endl;
    while(i<=n)
    {
        j=1;
        while(j<=n)
        {
            count+=1;
            cout<<count<<" ";
            j=j+1;
        }
        cout<<endl;
        i+=1;
    }
    //suite6**
    cout<<"-----------------Pattern6-----------------";
    i=1;
    n=4;
    cout<<"\n n="<<n<<endl;
    while(i<=n)
    {
        j=0;
        while(j<i)
        {
            cout<<" * ";
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
    //suite7
    cout<<"-----------------Pattern7-----------------";
    i=1;
    n=4;
    cout<<"\n n="<<n<<endl;
    while(i<=n)
    {
        j=0;
        while(j<i)
        {
            cout<<i<<" ";
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
    //suite8
    cout<<"-----------------Pattern8-----------------";
    i=1;
    n=4;
    int count8=0;
    cout<<"\n n="<<n<<endl;
    while(i<=n)
    {
        j=0;
        while(j<i)
        {
            count8+=1;
            cout<<count8<<" ";
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
    //suite9** :) 
    cout<<"-----------------Pattern9-----------------"; //each row has a same first element as row number.
    i=1;
    n=4;
    cout<<"\n n="<<n<<endl;
    while(i<=n)
    {
        j=1;
        //int value=j for j=1;
        while(j<=i)
        {
            cout<<i+j-1<<" ";  // cout<<value
            j+=1;
            // value=value+1
        } 
        cout<<endl;
        i+=1;
    }
    //suite10
    cout<<"-----------------Pattern10-----------------";  //each row has a same first element as row number.
    i=1;
    n=4;
    cout<<"\n n="<<n<<endl;
    while(i<=n)
    {
        j=1;
        //int value=j for j=1;
        while(j<=i)
        {
            cout<<i-j+1<<" ";  // cout<<value
            j+=1;
            // value=value+1
        } 
        cout<<endl;
        i+=1;
    }
    return 0;
}
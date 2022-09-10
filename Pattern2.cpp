#include <iostream>

using namespace std;

int main()
{
    int i,j,m,n;
    //suite11
    cout<<"-----------------Pattern11-----------------";
    i=0;
    n=4;
    cout<<"\n n="<<n<<endl;
    while(i<n)
    {
        j=0;
        while(j<n)
        {
            cout<<char(65+i)<<" ";
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
    //suite12
    cout<<"-----------------Pattern12-----------------";
    i=0;
    n=4;
    cout<<"\n n="<<n<<endl;
    while(i<n)
    {
        j=0;
        while(j<n)
        {
            cout<<char(65+j)<<" ";
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
    //suite13
    cout<<"-----------------Pattern13-----------------";
    i=0;
    n=4;
    int count=0;
    cout<<"\n n="<<n<<endl;
    while(i<n)
    {
        j=0;
        while(j<n)
        {
            cout<<char(65+count)<<" ";
            count+=1;
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
    //suite14
    cout<<"-----------------Pattern14-----------------";
    i=0;
    n=4;
    cout<<"\n n="<<n<<endl;
    while(i<n)
    {
        j=0;
        while(j<n)
        {
            cout<<char(65+i+j)<<" ";
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
    //suite15
    cout<<"-----------------Pattern15-----------------";
    i=0;
    n=4;
    cout<<"\n n="<<n<<endl;
    while(i<n)
    {
        j=0;
        while(j<=i)
        {
            cout<<char(65+i)<<" ";
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
    //suite16
    cout<<"-----------------Pattern16-----------------";
    i=0;
    n=4;
    cout<<"\n n="<<n<<endl;
    while(i<n)
    {
        j=0;
        while(j<=i)
        {
            cout<<char(65+i)<<" ";
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
    //suite17
    cout<<"-----------------Pattern17-----------------";
    i=0;
    n=4;
    int count7=0;
    cout<<"\n n="<<n<<endl;
    while(i<n)
    {
        j=0;
        while(j<=i)
        {
            cout<<char(65+count7)<<" ";
            count7+=1;
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
    //suite18** :)
    cout<<"-----------------Pattern18-----------------";
    i=0;
    n=4;
    cout<<"\n n="<<n<<endl;
    while(i<n)
    {
        j=0;
        while(j<=i)
        {
            cout<<char(65+i+j)<<" ";
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
    //suite19** :)
    cout<<"-----------------Pattern19-----------------";
    i=1;
    n=4;
    cout<<"\n n="<<n<<endl;
    while(i<=n)
    {
        j=0;
        while(j<i)
        {
            cout<<char(65+n-i+j)<<" ";
            j+=1; 
        }
        cout<<endl;
        i+=1;
    }
    //suite20*** :)
    cout<<"-----------------Pattern20-----------------";
    i=1;
    n=4;
    cout<<"\n n="<<n<<endl;
    while(i<=n)
    {
        j=0;
        while(j<=n-i)
        {
            cout<<n-i+1<<" ";
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
    return 0;
}
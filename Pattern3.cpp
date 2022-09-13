#include <iostream>

using namespace std;

int main()
{
    int i,j,m,n;
    //suite21** :)
    cout<<"-----------------Pattern21-----------------";
    i=1;
    n=7;
    cout<<"\n n="<<n<<endl;
    while(i<=n)
    {
        j=0;
        while(j<n)
        {
            if(j<(n-i))
                cout<<" ";
            else
                cout<<"*";
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
    //suite22**
    cout<<"-----------------Pattern22-----------------";  //we can print n-i stars in each row.
    i=1;
    n=5;
    cout<<"\n n="<<n<<endl;
    while(i<=n)
    {
        j=0;
        while(j<n)
        {
            if(j>(n-i))
                cout<<" ";
            else
                cout<<"*";
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
    //suite23** :)
    cout<<"-----------------Pattern23-----------------";  
    i=0;
    n=5;
    cout<<"\n n="<<n<<endl;
    while(i<n)
    {
        int space =0;
        //printing spaces
        while(space<i)
        {
            cout<<" ";
            space+=1;
        }
        while(space<n)
        {
            cout<<"*";
            space+=1;
        }
        cout<<endl;
        i+=1;
    }
    //suite24**
    cout<<"-----------------Pattern24-----------------";  
    i=0;
    n=5;
    cout<<"\n n="<<n<<endl;
    while(i<n)
    {
        int space =0;
        //printing spaces
        while(space<i)
        {
            cout<<" ";
            space+=1;
        }
        while(space<n)
        {
            cout<<i+1;
            space+=1;
        }
        cout<<endl;
        i+=1;
    }
    //suite25** :)
    cout<<"-----------------Pattern25-----------------";  
    i=0;
    n=5;
    cout<<"\n n="<<n<<endl;
    while(i<n)
    {
        int space=0;
        //printing spaces
        while(space<(n-i-1))
        {
            cout<<" ";
            space+=1;
        }
        while(space<n)
        {
            cout<<i+1;
            space+=1;
        }
        cout<<endl;
        i+=1;
    }
    //suite26**
    cout<<"-----------------Pattern26-----------------";  
    i=0;
    n=5;
    cout<<"\n n="<<n<<endl;
    while(i<n)
    {
        int space =0;
        //printing spaces
        while(space<i)
        {
            cout<<" ";
            space+=1;
        }
        while(space<n)
        {
            cout<<space+1;
            space+=1;
        }
        cout<<endl;
        i+=1;
    }
    //suite25** :)
    cout<<"-----------------Pattern25-----------------";  
    i=0;
    n=4;
    int count=0;
    cout<<"\n n="<<n<<endl;
    while(i<n)
    {
        int space=0;
        while(space<(n-i-1))
        {
            cout<<" ";
            space+=1;
        }
        while(space<n)
        {
            count+=1;
            cout<<count;
            space+=1;
        }
        cout<<endl;
        i+=1;
    }
    //suite26*** :))
    cout<<"-----------------Pattern26***-----------------";  
    i=0;
    n=4;
    int count26;
    cout<<"\n n="<<n<<endl;
    while(i<n)
    {
        int space=0;
        count26=0;
        while(space<(n-i-1))
        {
            cout<<" ";
            space+=1;
        }
        while(space<n)
        {
            count26+=1;
            cout<<count26;
            space+=1;
        }
        if(space>=n)
        {
            space=0;
            while(space<i)
            {
                cout<<(i-space);
                space+=1;
            }
        }
        cout<<endl;
        i+=1;
    }
    /***********************************************
     * Pattern26 Alternative
     * int i=1;
     * while(i<n)
     * {    
     *      //printing spaces
     *      int space= n-i;
     *      while(space)
     *      {
     *          cout<<" ";
     *          space-=1;
     *      }
     *      //printing 1st triangle
     *      int j=1
     *      while(j<i)
     *      {
     *          cout<<j;
     *          j+=1;
     *      }
     *      //printing 3rd triangle
     *      int start=i-1;
     *      while(start)
     *      {
     *          cout<<start;
     *          start-=1;
     *      }
     * }
     *              END
     * *********************************************
    */
   //suite27*** :))
    cout<<"-----------------Pattern27***-----------------";  
    i=0;
    n=5;
    int star;
    cout<<"\n n="<<n<<endl;
    while(i<n)
    {
        j=1;
        while(j<n-i+1)
        {
            cout<<j;
            j+=1;
        }
        star=1;
        while(star<=(2*i))
        {
            cout<<"*";
            star+=1;
        }
        j-=1;
        while(j>0)
        {
            cout<<j;
            j=j-1;
        }
        cout<<endl;
        i+=1;
    }
    return 0;

}
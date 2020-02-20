#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n%2==1)
    {
        cout<<1+(n-3)/2<<endl;
        n-=3;
        cout<<3<<' ';
        for(int i=0;i<n/2;i++)
        {
            cout<<2 <<' ';
        }
    }
    else
    {
        cout<<n/2<<endl;


        for(int i=0;i<n/2;i++)
        {
            cout<<2 <<' ';
        }
    }
    return 0;
}

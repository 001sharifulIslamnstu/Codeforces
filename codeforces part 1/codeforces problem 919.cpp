#include<bits/stdc++.h>
#define M 6000
using namespace std;

int main ()
{
    int n,m,a[M],b[M];
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i]>>b[i];
    }
    int minA=a[1],minB=b[1];
    for(int i =2 ; i<=n ; i++)
    {
        if(minA*b[i]>minB*a[i])
        {
            minA =a[i];
            minB=b[i];
        }
    }
    cout<<(double)minA*m/(double)minB;
    return 0;
}

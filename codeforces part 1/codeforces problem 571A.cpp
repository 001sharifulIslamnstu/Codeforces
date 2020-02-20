#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(0),cin.tie(0),cout.tie(0);
    long long n;
    cin>>n;
    long long a[2];
    cin>>a[0];
    for(long long  i=1;i<n;i++)
    {
        long long x;
        cin>>x;
        a[0]=x-a[0];

    }
    if(a[0]==0)
    {
       cout<<"YES\n";
    }
    else{
       cout<<"NO\n";
    }
  return 0;
}

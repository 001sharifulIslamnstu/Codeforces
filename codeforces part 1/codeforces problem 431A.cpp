#include<bits/stdc++.h>

using namespace std;
#define N 100100
long long a[N],b[N],c[N];
long long s1 =0,s2=0,s3=0;
int main ()
{
  ios_base :: sync_with_stdio(false),cin.tie(0),cout.tie(0);
  long long n;

   cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        s1 =s1+a[i];
    }
     for(int i=1;i<=n-1;i++)
    {
        cin>>b[i];
        s2 =s2+b[i];
    }
    for(int i=1;i<=n-2;i++)
    {
        cin>>c[i];
        s3 =s3+c[i];
    }

    cout<<s1-s2<<"\n"<<s2-s3;
    return 0;

}

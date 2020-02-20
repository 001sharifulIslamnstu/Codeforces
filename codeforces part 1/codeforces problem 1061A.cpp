#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int n;
    cin>>n;
    while(n--)
    {
        long long s;
        cin>>s;
        long long ans =s*(s+1)/2;
        for(long long i=1;i<=s;i*=2)
        {
            ans-=2*i;
        }
        printf("%lld\n",ans);
    }
   return 0;
}

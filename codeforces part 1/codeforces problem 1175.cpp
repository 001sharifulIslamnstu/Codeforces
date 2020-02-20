#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false),cin.tie(0),cout.tie(0);

    int t;
    cin>>t;
   for(int i=0; i<t;i++)
    {
      long long  n,k;
      long long ans=0;
      // scanf("%ll %ll",&n,&k);
      cin>>n>>k;

        while (n) {
            if (n % k) {
                ans += n % k;
                n -= n % k;
            } else {
                n /= k;
                ans++;
            }

        }
           cout<<ans<<endl;
   }
   return 0;
}

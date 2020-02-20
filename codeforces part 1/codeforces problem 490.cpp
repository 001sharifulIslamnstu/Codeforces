#include<bits/stdc++.h>

using namespace std;

const int maxn =1e6;
long long dp[maxn + 100];
int cnt[maxn +100];


int main()
{
   int n;
   scanf("%d",&n);
   for(int i=0;i<n;i++)
   {
       int x;
       scanf("%d",&x);
       cnt[x]++;

   }
   for(int i =0;i<maxn; i++)
   {
       dp[i+1] = max(dp[i+1],dp[i]);

   }


}

#include<bits/stdc++.h>
#define M 600
using namespace std;
int a[M][M];

int main()
{
   int n,m,ans=0;
   cin>>n>>m;
     for(int i=0;i<n;i++)
     {
         for(int j=0;j<2*m;j++)
         {
             cin>>a[i][j];
         }
     }
     for(int i=0;i<n;i++)
     {
         for(int j=0;j<2*m-1;j+=2)
         {
             if(a[i][j]==1 || a[i][j+1]==1)
             {
                 ans++;
             }

         }
     }
     cout<<ans<<endl;
     return 0;

}

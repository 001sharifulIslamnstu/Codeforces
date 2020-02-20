#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,i,a,cot=0;
   cin>>n;
   cin>>m;
    for(i=0;i<n;i++)
    {
        cin>>a;
        if(a>m)
        {
            cot++;
        }

    }
   cout<<cot+n;
}

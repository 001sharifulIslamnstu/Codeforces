#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,ans=0,bad=0;
    cin>>a>>b;
    int c=a;
    while(a>0)
    {
        ans++;
        a--;
        bad++;
        if(bad==b)
        {
            bad=0;
            a++;
        }

    }
    cout<<ans<<endl;
}



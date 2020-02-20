#include<bits/stdc++.h>

using namespace std;

int main ()
{
    ios_base :: sync_with_stdio(false),cin.tie(0),cout.tie(0);

    int q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        int n;
        cin>>n;
        int ans =0;
        while(n%5 == 0) n = n/5*4,ans++;
        while(n%3 == 0) n =n/3*2, ans++;
        while(n%2 == 0) n/=2,ans++;
        if(n==1) cout<<ans<<endl;
        else cout << -1 << endl;
    }

    return 0;
}

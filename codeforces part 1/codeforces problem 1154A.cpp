#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);

    int n,m;
    cin>>n>>m;

    vector<int> cnt(m+2);
    for(int i=0;i<n;i++)
    {
        int l,r;
        cin>>l>>r;
        ++cnt[l];
        --cnt[r+1];

    }
    for(int i =1;i<=m;++i)
    {
        cnt[i]+=cnt[i-1];
    }
    vector<int> ans;

    for(int i=1;i<=m;i++)
    {
       if(cnt[i]==0)
       {
           ans.push_back(i);

        }

    }
    cout<<ans.size()<<endl;
    for(auto it : ans) cout<<it<<" ";
    return 0;
}

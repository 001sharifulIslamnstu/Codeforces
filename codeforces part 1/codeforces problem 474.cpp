#include<bits/stdc++.h>

using namespace std;
int main()
{
    int a,b,c,ans;
    cin>>a>>b>>c;
    ans=min(min(a+b+c,2*(a+c)),min(2*(a+b),2*(c+b)));

    cout<<ans;

    return 0;
}

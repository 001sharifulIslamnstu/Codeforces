#include<iostream>
#include<cmath>

using namespace std;

int n,s,t;
int A,B,C;

int main()
{
    ios::sync_with_stdio(0);

    int T;
    cin>>T;
    while(T--)
    {
        cin>>n>>s>>t;
        B=s+t-n;
        A=s-B;
        C=t-B;
        cout<<max(A,C)+1<<endl;
    }
    return 0;
}

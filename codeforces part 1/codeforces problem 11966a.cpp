#include<bits/stdc++.h>

using namespace std;

int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i =0;i<n;i++)
        {
            cin>>a[i];
            a[i]%=2;
        }
        vector<int>v;
        int s =0;
        for(int i =0;i<n;i++)
        {
            s+=a[i];
            if(k!=1 && s%2==1)
            {
                v.push_back(i+1);
                 s=0;
                 k--;
            }


        }
        if(s%2==1)
        {
            cout<<"YES"<<endl;
             for(int i=0;i<v.size();i++)
                cout<<i<<" ";
        }
        else
        {
           cout<<"NO"<<endl;
        }
    }
    return 0;
}

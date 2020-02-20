#include<bits/stdc++.h>

using namespace std;


int main()
{
     ios_base :: sync_with_stdio(0),cin.tie(0);
    int n;
    cin>>n;

    vector<int> a(n);
    for(int&a1: a) cin>>a1;
    vector<int> p{1};
    int r =0,cur=a[0];
    for(int i =1;i<n;++i)
    {
        if(a[i]<=a[0]/2)
        {
            cur+=a[i];
            p.push_back(i+1);
        }
        else{
            r+=a[i];
        }
    }
    if(cur>r)
    {
        cout<<p.size()<<endl;
        for(int i=0;i<p.size();++i)
       {
           cout<<p[i]<<"\n"[i==p.size()-1];


       }
    }else{

       cout<<0<<endl;
    }

  return 0;
}

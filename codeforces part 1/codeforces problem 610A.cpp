#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n%2==1)
    {
        cout<<"0"<<endl;
        return 0;

    }
    else
    {
        n/=2;
        cout<<((n-1)/2);
    }
    return 0;
}

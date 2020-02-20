#include<bits/stdc++.h>

using namespace std;
int arr[100005];
int main()
{

    int q;

    cin>>q;


 for(int i=0;i<q;i++)
   {
        int n;
        cin>>n;

         int arr[n];

        for(int i=1;i<=n;i++)
        {
           cin>>arr[i];
          }

        sort(arr+1,arr+n+1);

       cout<<min(arr[n-1]-1,n-2)<<endl;
   }

  return 0;
}

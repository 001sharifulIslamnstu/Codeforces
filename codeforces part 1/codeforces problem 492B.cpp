#include<bits/stdc++.h>
using namespace std;

int main ()
{
    ios_base :: sync_with_stdio(false),cin.tie(0),cout.tie(0);
    long long n,l;

    cin>>n>>l;
    long long p=n;
     double maxi=0;

    double arr[n];
    int i=0;

    while(n--)
    {
       cin>>arr[i];
       i++;
    }
    sort(arr,arr+p);
    long long k=p;

     long long int j=1;

     if(k<=1)
     {
         if(k==l)

             {
                 cout<<fixed<< setprecision(10)<<l<<endl;
                 return 0;
             }
             else if(l>1)
         {
             if(l==arr[0])
             {
                 cout<<fixed <<setprecision(10)<<l <<endl;
             return 0;

             }
             else
               {
                   cout<<fixed <<setprecision(10)<<l-arr[0] <<endl;
               return 0;
               }

         }

     }
    while(p--)
      {


          if(arr[j]-arr[j-1]> maxi && j<k)
            {

             maxi=arr[j]-arr[j-1];

            }
        j++;
      }
       double ans = maxi/2;


     if(arr[0]>ans)
      {
         // ans=arr[0];
         if(l>arr[1])
         {
             cout<<fixed <<setprecision(10)<<l-arr[1]<<endl;
             return 0;
         }


         else{
                cout<<fixed <<setprecision(10)<<arr[0]<<endl;
             }
             return 0;
      }




         cout<<fixed<< setprecision(10)<<ans<<endl;




    return 0;

}

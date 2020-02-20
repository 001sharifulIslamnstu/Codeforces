#include<bits/stdc++.h>

using namespace std;

int main ()
{
   char t[2];
   string s;
   cin>>t>>s;
   for(int i=0;i<2;i++)
   {
       for(int j=0;j<s.length()+2;j++)
       {
           if(t[i]==s[j])
           {
               cout<<"YES"<<endl;
               return 0;
           }

       }
   }
    cout<<"NO"<<endl;


   return 0;

}

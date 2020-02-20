#include<bits/stdc++.h>


using namespace std;

int main() {
   set<int>st;
   string ans ="NO";
   string s;
   cin>>s;
   int cnt[26]={},n;
   n=s.length();
   for(int i= 0;i<n;i++)
   {

       cnt[s[i]-'a']++;
       cout<< cnt[s[i]-'a']<<"\t";

   }
   cout<<endl;
   for(int i =-1;i<26;i++)
{
       if(i>=0)
        cnt[i]--;
         cout<< cnt[i]<<"\t";
        set<int>st;

    for (int j = 0; j < 26; j++) {
      if (cnt[j])
        st.insert(cnt[j]);
      }
      if(st.size()==1)
      {
          ans="YES";
      }
      if(i>=0)
      {
          cnt[i]++;
      }

   }

 cout<<ans<<endl;

    return 0;
}

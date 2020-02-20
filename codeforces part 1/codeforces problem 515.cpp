#include<bits/stdc++.h>

using namespace std;
multiset<char> s;
int main ()
{

    int n;
    char s1[21];
  scanf("%d",&n);
    scanf("%s",s);
    for(int i=0;i<n;i++)
    {
        if(s1[i]=='2')
        {
            s.insert(2);
        }
         if(s1[i]=='3')
        {
            s.insert(3);
        }
        if(s1[i]=='4')
        {
            s.insert(2);
            s.insert(2);
            s.insert(3);
        }
        if(s1[i]=='5')
        {
            s.insert(5);
        }
         if(s1[i]=='6')
        {
            s.insert(5);
            s.insert(3);

        }
         if(s1[i]=='7')
        {
            s.insert(7);

        }
        if(s1[i]=='8')
        {
            s.insert(7);
            s.insert(2);
            s.insert(2);
            s.insert(2);
        }
        if(s1[i]=='9')
        {
            s.insert(7);
            s.insert(3);
            s.insert(3);
            s.insert(2);
        }

    }

    vector<char> ans;
    for(multiset<char> :: iterator it=s.begin();it!=s.end();it++)
        ans.push_back(*it+'0');
    for(int i=ans.size()-1;i>=0;i++)
        putchar(ans[i]);
    return 0;
}







#include<bits/stdc++.h>

using namespace std;

int main ()
{
   int n;
   cin>>n;
   int x[n];
    set<int> s;
	set<int> :: iterator it;
	for(int i=0;i<n;i++)
       {

           cin>>x[i];

       }
       for(int i=n-1;i>=0;i--)
       {
           s.insert(x[i]);

       }

	cout<<s.size()<<endl;
	for(it= s.begin(); it!=s.end(); it++)
		cout << *it <<" ";
   return 0;

}

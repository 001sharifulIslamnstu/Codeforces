#include <iostream>

using namespace std;

int main ()
{
    int n,a[100],b[100],i,j,cot=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
      cin>> a[i];
      cin>> b[i];
    }
        for(i=0;i<n;i++)
        {
           for(j=0;j<n;j++)
           {


            if(a[i]==b[j])
            {
                cot++;
            }

        }
    }
    cout<<cot;
}

#include<bits/stdc++.h>

using namespace std;
int getgcd( long long a, long long b)
{
    if(b>a)
        swap(a,b);
    if(b==0)
        return a;
    return getgcd(b,a%b);
}

int main ()
{
    ios :: sync_with_stdio(false),cin.tie(0),cout.tie(0);
    int a,b,n;

}

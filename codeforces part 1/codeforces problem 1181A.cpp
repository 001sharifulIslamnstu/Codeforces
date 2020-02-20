#include<bits/stdc++.h>
#define LL long long
using namespace std;

int main ()
{
    ios_base :: sync_with_stdio(false),cin.tie(NULL);
    long long sha ,mah,pri,cnt1=0,cnt2=0;


    LL x, y, z;
    cin >> x >> y >> z;

    LL d = (x + y) / z;
    LL a = x / z;
    x -= a * z;
    LL b = y / z;
    y -= b * z;

    if (a + b == d) {
        cout << d << " " << 0 << endl;
        return 0;
    } else {
        cout << d << " " << min(abs(z - x), abs(z - y)) << endl;
    }

    return 0;
}



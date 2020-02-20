#include<iostream>

using namespace std;

int main ()
{
    int c1,c2,c3,c4,c5,sum,avg;
    cin>>c1>>c2>>c3>>c4>>c5;
    avg=(c1+c2+c3+c4+c5)%5==0?printf("%d",(c1+c2+c3+c4+c5)/5):printf("-1");

}

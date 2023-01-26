#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a,b,x,y;
    cin>> a >> b >> x >> y;
    double d1 = sqrt(a*a+b*b);
    double d2 = sqrt(x*x+y*y);
    (d1==d2)?cout<<"Empate":(d1<d2)?cout<<"Russo":cout<<"Wil";
    return 0;
}


#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a,b,n,m;
    cin >> n >> m >> a >> b;

    double x = (double) m/b;
    (m*a<=b)?cout << n*a: cout<<(n/m)* b + min((n%m)*a,b);

    return 0;
}

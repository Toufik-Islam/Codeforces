#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    bool f= true;
    int c=INT_MAX;
    while(n--)
    {
        int a,b;
        cin >> a >> b;
        if(c == b || c == a)
            continue;
        else if(c>a && c>b)
            c = max(a,b);
        else if(c<a && c>b)
            c = b;
        else if(c>a && c<b)
            c = a;
        else
            f = false;
    }
    if(f)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}


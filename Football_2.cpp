#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    string a,b,c;
    int x=1,y=0;
    cin>>n;
    cin>>a;
    b=a;    n--;
    while(n--)
    {
        cin>>a;
        if(a==b)
            x++;
        else
        {
            y++;    c=a;
        }
    }
    x>y?cout<<b:cout<<c;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin>> n;
        int a=0,b=0;
        int f1=1,f2=0;
        for(int i=1; a+b+i<n; i++)
        {
            if(f1<2)
            {
                a+=i;
                f1++;
                if(f1==2)
                    f2=0;
            }
            else if(f2<2)
            {
                b+=i;
                f2++;
                if(f2==2)
                    f1=0;
            }
        }
        if(a+b!=n)
        {
            if(f1<2)
                a+=(n-a-b);
            else
                b+=(n-a-b);
        }
        cout << a << ' ' << b << "\n";
    }

    return 0;
}

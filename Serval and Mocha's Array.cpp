#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int A[n];
        for(int i=0; i<n; i++)
            cin >> A[i];

        bool f = false;
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(__gcd(A[i],A[j])<=2)
                {
                    f = true;
                    break;
                }
                if(f)
                    break;
            }

        }
        if(f)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}

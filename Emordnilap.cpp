#include<bits/stdc++.h>
using namespace std;

unsigned long long int mod = 1000000007;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin >> n;
        unsigned long long int fact=1,ans;
        for(int i =1;i<=n;i++)
        {
            fact*=i;
            fact=fact%mod;
        }
        ans = (n%mod *((n-1)%mod))%mod;
        ans = (ans*fact)%mod;
        cout << ans%mod << '\n';
    }
    return 0;
}


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
        cin>>n;
        string A;
        cin >> A;
        int ans=n;
        for(int i=0,j=n-1; i<j; i++,j--)
        {
            if(A[i]!=A[j])
                ans-=2;
            else
                break;
        }
        cout << ans << "\n";
    }
    return 0;
}

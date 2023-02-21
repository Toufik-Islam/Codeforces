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
        cin >> n;
        vector<int> A(n);
        for(int i=0; i<n; i++)
            cin >> A[i];

        sort(A.begin(),A.end());
        int i =0, j=n/2;
        int ans = n;
        while(i<n/2 && j<n)
        {
            if(A[i]!=A[j])
            {
                ans-=2;
            }
            if(A[i]==A[j])
                j++;
            else
            {
                i++;
                j++;
            }
        }
        cout << ans << '\n';
    }

    return 0;
}



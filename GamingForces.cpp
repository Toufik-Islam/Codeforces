
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
        int n,cnt=0;
        cin >> n;

        vector<int>A(n);
        for(int i=0;i<n;i++)
        {
            cin >> A[i];
            if(A[i]==1)
                cnt++;
        }

        cout << (cnt+1)/2 + A.size()-cnt << '\n';
    }


    return 0;
}


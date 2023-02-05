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
        int n,neg=0,minn=INT_MAX;
        cin >> n;
        long long sum=0;
        vector<int> A(n);
        for(int i=0; i<n; i++)
        {
            cin >> A[i];
            sum+=abs(A[i]);
            minn=min(minn,abs(A[i]));
            if(A[i]<1)
                neg++;
        }

        if(neg%2==0)
            cout << sum << "\n";
        else
            cout << sum - 2*minn << "\n";
    }
    return 0;
}

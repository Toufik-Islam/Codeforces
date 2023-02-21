#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int A[2*n];
        for(int i=0;i<2*n;i++)
            cin >> A[i];

        sort(A,A+2*n);

        for(int i=0;i<n;i++)
            cout << A[i] << ' ' << A[n+i] << ' ';
        cout << '\n';
    }

    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin>>n;
    int A[n];
    for(int i=0; i<n; i++)
        cin >> A[i];
    sort(A,A+n);
    int q;
    cin>>q;
    while(q--)
    {
        int x;
        cin>>x;

        auto it = upper_bound(A,A+n,x);
        cout << it - A << '\n';
    }

    return 0;
}

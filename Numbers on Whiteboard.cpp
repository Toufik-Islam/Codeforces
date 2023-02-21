#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        priority_queue<int> A;
        for(int i=1;i<=n;i++)
            A.push(i);

        cout << "2\n";
        while(A.size()!=1)
        {
            float x = A.top();
            A.pop();
            float y = A.top();
            A.pop();
            int ans = round((x+y)/2);
            A.push(ans);
            cout << x << ' ' << y << '\n';
        }
    }

    return 0;
}

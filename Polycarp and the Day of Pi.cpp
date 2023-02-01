#include<bits/stdc++.h>
using namespace std;

string PI = "314159265358979323846264338327";

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while(t--)
    {
        string A;
        cin>>A;
        int cnt=0;
        for(int i=0;i<A.size();i++)
        {
            if(A[i]==PI[i])
                cnt++;
            else
                break;
        }
        cout << cnt << "\n";
    }

    return 0;
}

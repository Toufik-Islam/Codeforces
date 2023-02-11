#include <bits/stdc++.h>
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
        vector<int> A(n);
        for(int i=0; i<n; i++)
            cin >> A[i];

        int two = count(A.begin(),A.end(),2);
        if(two==0)
            cout << "1\n";
        else if(two%2==1)
            cout << "-1\n";
        else
        {
            for(int i=0,j=0; i<n; i++)
            {
                if(A[i]==2)
                    j++;
                if(j==two/2)
                {
                    cout << i+1 << '\n';
                    break;
                }
            }
        }
    }
    return 0;
}


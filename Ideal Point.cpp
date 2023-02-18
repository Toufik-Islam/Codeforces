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
        int n,k;
        cin >> n >> k;
        int p,q;
        p=k-1;
        q=k+1;
        int kc=0,pc=0,qc=0;
        bool f=false;
        for(int i=0; i<n; i++)
        {
            int l,r;
            cin >> l >> r;
            if(k>=l && k<=r)
            {
                kc++;

                if(p>=l && p<=r)
                    pc++;

                if(q>=l && q<=r)
                    qc++;
            }

            if(l==r && l==k)
                f=true;
        }
        if(f)
            cout << "YES\n";
        else if(kc>pc && kc>qc)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}

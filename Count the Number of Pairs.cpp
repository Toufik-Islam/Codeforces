#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k;
    string s;
    cin >> n >> k >> s;
    map<char, int> A,B;

    for(char c='a'; c<='z'; c++)
        A[c]=0;
    for(char c='A'; c<='Z'; c++)
        B[c]=0;

    for(int i=0; i<s.size(); i++)
    {
        if(s[i]>='a' && s[i]<='z')
            A[s[i]]++;
        else
            B[s[i]]++;
    }
    auto it1 = A.begin();
    auto it2 = B.begin();
    int ans=0;
    int p=0;
    for(; it1!=A.end(); it1++,it2++)
    {
        int x;
        x=min(it1->second,it2->second);
        ans+=x;
        it1->second-=x;
        it2->second-=x;
        p+= (it1->second+it2->second)/2;
    }
    ans= ans + (min(k,p));
    cout << ans <<'\n';
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t=1;
    cin >> t;
    while(t--)solve();

    return 0;
}



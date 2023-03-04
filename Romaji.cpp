#include<bits/stdc++.h>
using namespace std;

int main()
{
    string A;
    cin >> A;
    int i= A.size()-1;
    if(!(A[i]=='a' || A[i]=='e' || A[i]=='i' || A[i]=='o' || A[i]=='u' || A[i] == 'n'))
    {
        cout << "NO";
        return 0;
    }
    for(i=0; i<A.size(); i++)
    {
        if(A[i]=='a' || A[i]=='e' || A[i]=='i' || A[i]=='o' || A[i]=='u' || A[i] == 'n')
            continue;
        if((A[i]!='a' && A[i]!='e' && A[i]!='i' && A[i]!='o' && A[i]!='u') && (A[i+1]=='a' || A[i+1]=='e' || A[i+1]=='i' || A[i+1]=='o' || A[i+1]=='u'))
        {
            i++;
        }
        else
        {
            cout << "NO";
            return 0;
        }

    }

    cout << "YES";
    return 0;
}

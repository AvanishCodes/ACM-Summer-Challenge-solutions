#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n], b[n], c[n];
        long res = 0;
        for(int i=0; i<n; i++)
            cin>>a[i];
        for(int i=0; i<n; i++)
            cin>>b[i];
        for(int i=0; i<n; i++)
            cin>>c[i];
        for(int i=0; i<n; i++){

            long diff = a[i] + b[i] - c[i];
            if(diff > 0)
                res += diff;
        }
        cout<<res<<'\n';

        
    }

    

    return 0;
}


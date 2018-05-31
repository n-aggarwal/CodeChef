#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(a,b) for(int i=a;i<b;i++)
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
         int n,q,j, s=1, m=0;
        cin>>n>>q;
        int a[n],b[q],i;
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<q;i++)
            {
                cin>>b[i];
                if(b[i] > m)
                    m=b[i];
            }
       f(0,n) {
           s*= a[i];
           if(s > m)
            break;
       }
       f(0,q) cout<<b[i]/s<<" ";
        cout<<endl;
    }
}

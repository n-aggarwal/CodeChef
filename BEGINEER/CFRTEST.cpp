#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int t,i=0;
    cin>>t;
    vector <int> ans(t);
    while(i<t)
    {
        int x,n,r;
        cin>>n;

        vector <int> a(n);
        for(x=0;x<n;x++)
        {
            cin>>a[x];
        }
        for(x=0;x<n;x++)
        {
            for(int z=0;z<n;z++)
            {
                if((a[x]==a[z])&&(x!=z))
                   {
                     a[x]=-1;
                   }
            }
        }
        r=n;
        for(x=0;x<n;x++)
        {
            if(a[x]<0)
               {
                   --r;
               }
        }
             ans[i]=r;
             i++;
    }
    for(i=0;i<t;i++)
   {
       cout<<ans[i]<<" ";
   }
}

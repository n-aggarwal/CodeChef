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
        int n,sum,r;
        cin>>n;
        sum=n%10;
         do
         {
             r=n%10;
             n=n/10;
         }while(n>0);
         sum+=r;

         ans[i]=sum;
         i++;
    }
    for(i=0;i<t;i++)
    {
        cout<<ans[i]<<" ";
    }
}

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
        long int n,sum=0,r;
        cin>>n;
        do
        {
            r=n%10;
            sum+=r;
            n=n/10;
        }while(n>0);
        ans[i] = sum;
        i++;

    }
    for(i=0;i<t;i++)
    {
        cout<<ans[i]<<" ";
    }
}

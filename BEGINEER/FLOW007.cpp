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
        int n,re=0,r;
        cin>>n;
        do
        {   r=n%10;
            re=r+(re*10);
            n=n/10;
        }while(n>0);

        ans[i]=re;
        i++;
    }
    for(i=0;i<t;i++)
    {
        cout<<ans[i]<<" ";
    }
}

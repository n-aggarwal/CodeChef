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
        int n;
        cin>>n;
        if(n>2)
            ans[i]=(n/2)+1;
        else
            ans[i]=n;
         i++;
    }
    for(i=0;i<t;i++)
    {
        cout<<ans[i]<<" ";
    }
}

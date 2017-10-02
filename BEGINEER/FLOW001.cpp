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
        int a,b;
        cin>>a;
        cin>>b;
        ans[i]=a+b;
        i++;
    }
    for(i=0;i<t;i++)
    {
        cout<<ans[i]<<" ";
    }
}

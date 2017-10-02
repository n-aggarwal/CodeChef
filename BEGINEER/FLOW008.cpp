#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int t,i=0;
    cin>>t;

    vector <int> ans(t);
    for(;i<t;i++)
    {
        cin>>ans[i];
    }
    for(i=0;i<t;i++)
    {
        if(ans[i]<10)
            cout<<"\nWhat an obedient servant you are!";
        else
            cout<<"\n-1";
    }
}

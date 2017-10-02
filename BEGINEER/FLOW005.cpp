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
        int n,c=0;
        cin>>n;
        while(n!=0)
        {if(n>=100)
            n-=100;
        else if(n>=50)
            n-=50;
        else if(n>=10)
            n-=10;
        else if(n>=5)
            n-=5;
        else if(n>=2)
            n-=2;
        else
            n-=1;

        c++;
        }

        ans[i]=c;
        i++;
    }
    for(i=0;i<t;i++)
        cout<<ans[i]<<" ";
}


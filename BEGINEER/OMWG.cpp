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
        int x,y,sum=0;
        cin>>x;
        cin>>y;
        for(int r=0;r<x;r++)
        {
            for(int c=0;c<y;c++)
            {
                if((r==0)&&(c==0))
                {
                    sum+=0;
                }
                 else if((r==0)||(c==0))
                    sum+=1;
                 else
                    sum+=2;
            }
        }
        ans[i]=sum;
        i++;
    }
    for(i=0;i<t;i++)
    {
        cout<<ans[i]<<" ";
    }

}
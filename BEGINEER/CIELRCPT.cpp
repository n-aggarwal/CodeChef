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
        {
            if(n>=2048)
                n-=2048;
            else if(n>=1024)
                n-=1024;
            else if(n>=512)
                n-=512;
            else if(n>=256)
                n-=256;
            else if(n>=128)
                n-=128;
            else if(n>=64)
                n-=64;
            else if(n>=32)
                n-=32;
            else if(n>=16)
                n-=16;
            else if(n>=8)
                n-=8;
            else if(n>=4)
                n-=4;
            else if(n>=2)
                n-=2;
            else
                n-=1;
            c++;
        }
        ans[i] = c;
        i++;

    }
    for(int i=0;i<t;i++)
    {
        cout<<ans[i]<<" ";
    }

}

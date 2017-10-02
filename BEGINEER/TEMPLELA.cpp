#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int nstick,nstrip;
    cin>>nstrip;
    int i=0,flag=1,x,g;
    vector <int> ans(nstrip);
    while(i<nstrip)
    {    flag=1;
        cin>>nstick;
        vector <int> ht(nstick);
        for(x=0;x<nstick;x++)
        {
            cin>>ht[x];
        }
        vector <int> th(nstick);
        for(x=0,g=nstick-1;x<nstick;x++,g--)
        {
            th[x]=ht[g];
        }


        for(x=0;x<nstick;x++)
            if(th[x]!=ht[x])
        {flag=0;
        break;}
        for(x=0,g=1;x<=nstick/2;x++,g++)
                {
                    if(ht[x]!=g)
                    {
                       flag=0;
                       break;
                    }
                }



        if((nstick%2==0)||(ht[0]!=1))
             {
                 ans[i]=0;
             }
        else if(flag==1)
               ans[i]=1;
           else
                {ans[i]=0;
                }
          i++;
    }
    for(i=0;i<nstrip;i++)
    {
        if(ans[i]==0)
            cout<<"\nno";
        else
            cout<<"\nyes";
    }
}


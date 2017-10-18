#include<bits/stdc++.h>

using namespace std;

int main()
{
     int t;
     cin>>t;

     while(t--)
     {
          long n,m,c,to=0,i;
          cin>>n>>m>>c;

          if(n*m<c)
               {
                    cout<<"0\n";
                    continue;
               }
          else
          {    //cout<<"1 \n";
               for(i=1;i<=n;i++)
               {    //cout<<"2 \n";
                    if(c%i==0)
                    {
                         long x=c/i;
                         if(x<=m)
                              {
                                   to++;
                                  // cout<<"("<<i<<","<<x<<")\n";
                              }


                    }

               }
          }
          cout<<to<<"\n";
     }
}

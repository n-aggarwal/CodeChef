#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,m,i,j;
    scanf("%d",&t);
    while(t--)
    {
       scanf("%d %d",&n,&m);
       char a[n][m];
       for(i=0;i<n;i++)
       {
           for(j=0;j<m;j++)
           {
              cin>>a[i][j];
           }
       }
     /*   for(i=0;i<n;i++)
       {
           for(j=0;j<m;j++)
           {
              cout<<a[i][j]<<" ";
           }
          cout<<endl;
       }*/

    vector<char >vect;
       int k=0,l=0;
       while(k<n &&l<m)
       {
           for(i=l;i<m;++i)
           {
               vect.push_back(a[k][i]);
           }
           k++;
           for(i=k;i<n;++i)
           {
               vect.push_back(a[i][m-1]);

           }
           m--;
           if(k<n)
           {
               for(i=m-1;i>=l;--i)
               {
                  vect.push_back(a[n-1][i]);
               }
               n--;
           }
           if(l<m)
           {
               for(i=n-1;i>=k;--i)

               {
                   vect.push_back(a[i][l]);
               }
               l++;
           }
       }


       long long int cost1=0,cost2=0;
       int red=0,green=0;
       for(i=1;i<vect.size();i++)
       {
           if(vect[0]=='R')
           {
               if(i%2==1)
               {
                   if(vect[i]!='G')
                   cost1+=5;
               }
               else if(i%2==0)
               {
                    if(vect[i]!='R')
                   cost1+=3;
               }
               red=1;
           }
           else if(vect[0]=='G')
           {
               if(i%2==1)
               {
                   if(vect[i]!='R')
                   cost1+=3;
               }
               else if(i%2==0)
               {
                    if(vect[i]!='G')
                   cost1+=5;
               }
               green=1;
           }
       }
       if(red)
       {
           i=1;
           cost2+=5;
           while(i<vect.size())
           {
             if(i%2==1)
               {
                   if(vect[i]!='R')
                   cost2+=3;
               }
               else if(i%2==0)
               {
                    if(vect[i]!='G')
                   cost2+=5;
               }
               i++;
           }
       }
       else if(green)
       {
            i=1;
           cost2+=3;
           while(i<vect.size())
           {
             if(i%2==1)
               {
                   if(vect[i]!='G')
                   cost2+=5;
               }
               else if(i%2==0)
               {
                    if(vect[i]!='R')
                   cost2+=3;
               }
               i++;
           }

       }
       if(cost1<cost2)
       cout<<cost1<<endl;
       else
       cout<<cost2<<endl;
    }


}

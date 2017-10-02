#include<iostream>
#include<vector>
 
using namespace std;
 
int main()
{
    int t,flag,i=0;
    cin>>t;
    vector <int> ans(t);
 
    while(i<t)
    {
        int a ,b;
        long int suma=0,sumb=0;
        cin>>a;
        cin>>b;
 
        for(int j=1;;j++)
        {
            if(j%2==1)
                {
                    suma+=j;
                   if(suma>a)
                   {
                      flag=1;
                      break;
                   }
                }
 
            else
                {
                    sumb+=j;
                   if(sumb>b)
                    {
                        flag=0;
                        break;
                    }
                }
        }
        ans[i]=flag;
        i++;
    }
    for(i=0;i<t;i++)
    {
        if(ans[i]==0)
            cout<<"\nLimak";
        else
            cout<<"\nBob";
    }
 

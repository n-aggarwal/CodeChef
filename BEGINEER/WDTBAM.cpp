#include<bits/stdc++.h>
using namespace std;

int main()
{
   int t,n,i,j;
   scanf("%d",&t);
   while(t--)
   {

     scanf("%d",&n);
     string s,s1;
     cin>>s;
     cin>>s1;
     int w[n+1];
      for(i=0;i<n+1;i++)
     {
         scanf("%d",&w[i]);
     }
     int ans[26]={0};
     int chef[26]={0};
    /* for(i=0;i<s.size();i++)
     {
         int x=s[i]-'A';
         ans[x]++;
     }
     for(i=0;i<s1.size();i++)
     {
         int x=s1[i]-'A';
         chef[x]++;
     }
      int count=0;
     for(i=0;i<26;i++)
     {
        if(ans[i] &&ans[i]==chef[i])
        count++;
     }*/
      int count=0;
     for(i=0;i<n;i++)
     {
        if(s[i]==s1[i])
        count++;
     }
   // cout<<"co"<<count<<" ";
   if(count<n)
   {
    int max=w[count];
     for(i=0;i<=count;i++)
     {
        if(w[i]>max)
        max=w[i];
     }
     cout<<max<<endl;
    }
    else
    cout<<w[n]<<endl;

    }
    return 0;
}

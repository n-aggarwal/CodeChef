#include<bits/stdc++.h>

using namespace std;

int main()
{
     int t;
     cin>>t;

     while(t--)
     {
          string str;
          cin>>str;
          int length=str.length();
          long maxval = length*11;

          long count=2;
          int i;
          for(i=1;i<length;i++)
          {
               if(str[i]>=str[i-1])
                    count+=str[i]-str[i-1]+1;
               else
                    count+= 26-(str[i-1]-str[i])+1;
               if(count>maxval)
                    break;
          }
          //cout<<count<<" "<<maxval<<"\n";
          if(count>maxval)
               cout<<"NO\n";
          else
               cout<<"YES\n";
     }
}

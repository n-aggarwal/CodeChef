#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    string s;
    cin>>s;
    int l=s.length();
    int z=0,o=0;
    for(int i=0;i<l;i++){
          if(s[i]=='0')
            z++;
          else
             o++;
    }
    if(z==1||o==1)
           cout<<"Yes\n";
        else
        cout<<"No\n";
}
return 0;
}

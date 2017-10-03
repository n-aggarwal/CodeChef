#include<iostream>
#include<set>
using namespace std;
int main(){

int t;
cin>>t;
while(t--){
   long long int n;
   cin>>n;
   long long int i,nones=0,pones=0,zeros=0,neg=0,pos=0,arr[n];

   for(i=0;i<n;i++){
        cin>>arr[i];
         if(arr[i]==0){
            zeros++;
        }
        if(arr[i]==1){
            pones++;
        }
        if(arr[i]==-1){
            nones++;
        }
        if(arr[i]<-1){
            neg++;
        }
        if(arr[i]>1){
            pos++;
        }
   }
   if(n==1){
    cout<<"yes"<<endl;continue;
   }

    if(nones>1 && pones==0){
         cout<<"no"<<endl;continue;
    }
    if((pos==0 && neg==0 ) || (pos==1 && neg==0 && nones==0) || (neg==1 && nones==0 && pos==0)){
        cout<<"yes"<<endl;continue;
    }
    else{
        cout<<"no"<<endl;continue;
    }


}



}

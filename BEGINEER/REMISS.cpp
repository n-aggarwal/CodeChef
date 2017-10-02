#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    int t,i=0;
    cin>>t;
    vector <long int> a(t);
    vector <long int> b(t);

    while(i<t)
    {
        cin>>a[i];
        cin>>b[i];
        i++;
    }
    for(i=0;i<t;i++)
    {
        cout<<max(a[i],b[i])<<" ";

        cout<<a[i]+b[i];
    }
}

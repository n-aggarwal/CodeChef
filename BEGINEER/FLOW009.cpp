#include<iostream>
#include<iomanip>
#include<vector>

using namespace std;

int main()
{
    int t,i=0;
    cin>>t;
    vector <double> ans(t);

    while(i<t)
    {
         double  am , qu,pr;

        cin>>qu;
        cin>>pr;

        if(qu>1000)
        {
            pr = pr - (pr/10);

        }

        am=qu*pr;

        ans[i]=am;
        i++;
    }

    for(i=0;i<t;i++)
    {
        cout<<setprecision(6)<<ans[i]<<" ";
    }
}

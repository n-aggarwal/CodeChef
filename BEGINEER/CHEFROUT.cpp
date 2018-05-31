#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--)
	{ int i,flag=0;
		char s[100000];
		cin>>s;
		for(i=0;i<strlen(s)-1;i++)
		{
		if(s[i]=='S'&&s[i+1]=='C'||s[i]=='S'&&s[i+1]=='E'||s[i]=='E'&&s[i+1]=='C')
		{ flag=1; break;
		}

			}


	if(flag==0) cout<<"yes"<<endl;
			else cout<<"no"<<endl;

	}	return 0;
}

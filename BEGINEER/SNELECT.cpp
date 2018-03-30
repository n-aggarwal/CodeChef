#include<stdio.h>
#include<string.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int i,k,p=0,q=0;
		char s[110];
		scanf("%s",&s);
		k=strlen(s);
		for(i=0;s[i]!='\0';i++)
		{
			if(s[i]=='s')
			p++;
		}
		/*if(k==1)
		{
			if(s[0]=='s')
			printf("snakes\n");
			else
			printf("mongooses\n");
		}
		else
		{*/
		for(i=0;i<k;i++)
		{
			if(s[i]=='s')
			{
				if(s[i+1]=='m')
				{
					q++;	i++;
				}
				else
				continue;
			}
			else
			{
				if(s[i+1]=='s')
				{
					q++;	i++;
				}
				else
				continue;
			}
		}
		k=k-p;
		p=p-q;
		if(p>k)
		printf("snakes\n");
		else if(k>p)
		printf("mongooses\n");
		else
		printf("tie\n");
	}
	return 0;
}

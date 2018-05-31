#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,d,x,i;
        char s[4];
        scanf("%d",&n);
        scanf("%s",s);
        int a[7];
        for(i=0;i<7;i++)a[i]=n/7;
        if(s[0]=='m')x=0;
        if(s[0]=='t'&&s[1]=='u')x=1;
        if(s[0]=='w')x=2;
        if(s[0]=='t'&&s[1]=='h')x=3;
        if(s[0]=='f')x=4;
        if(s[0]=='s'&&s[1]=='a')x=5;
        if(s[0]=='s'&&s[1]=='u')x=6;
        for(i=0;i<(n%7);i++)
        {
           a[x++]++;
           if(x==7)x=0;
        }
        for(i=0;i<7;i++)printf("%d ",a[i]);printf("\n");
    }
return 0;
}

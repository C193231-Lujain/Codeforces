#include<stdio.h>
int main()
{long long int t,n,b[500],i,temp=0,j;
scanf("%lld",&t);
while(t--)
{scanf("%lld",&n);
for(i=1;i<=n;i++)
{scanf("%lld",&b[i]);}
for(i=1;i<=n;i=i+2)
{for(j=n;j>=0;j--){temp=b[i+1];
b[i+1]=b[n];
}
printf("%lld ",b[i]);}
}
return 0;}

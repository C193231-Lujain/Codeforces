#include<stdio.h>
int main()
{long long int K,S;
int count=0,i,j,r;
scanf("%lld %lld",&K,&S);
for(i=0;i<=K;i++)
{for(j=0;j<=K;j++)
{r=S-i-j;
if(r>=0&&r<=K)
{count++;}
    }
  }
printf("%d",count);}

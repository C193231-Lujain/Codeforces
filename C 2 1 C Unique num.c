#include<stdio.h>
int main()
{int t,x,sum=0,r=0;
scanf("%d",&t);
while(t--)
{scanf("%d\n",&x);
while(x>0)
{r=x%10;
sum=sum+r;
x=x/10;}
}
}

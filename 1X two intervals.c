#include<stdio.h>
int main()
{int a[4],i,k;
for(i=0;i<4;i++)
{scanf("%d",&a[i]);}
if(a[1]>a[3])
{a[1]=a[3];}
if(a[0]>a[2])
{a[2]=a[0];}
if(a[1]>=a[2])
{printf("%d %d",a[2],a[1]);}
else
    printf("-1");
return 0;}

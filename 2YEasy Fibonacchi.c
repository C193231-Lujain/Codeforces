#include<stdio.h>
int main()
{int n,i,F1=0,F2=1,F;
scanf("%d",&n);
for(i=0;i<n;i++)
{printf("%d ",F1);
F=F1+F2;
F1=F2;
F2=F;}
return 0;}

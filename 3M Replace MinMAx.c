#include<stdio.h>
int main()
{int N,A[100000],i,max,min,s,pmin=0,pmax=0;
scanf("%d",&N);
for(i=0;i<N;i++)
{scanf("%d",&A[i]);}
max=A[0];
min=A[0];
for(i=0;i<N;i++)
    {if(A[i]>max)
{max=A[i];
pmax=i;}
if(A[i]<min)
{min=A[i];
pmin=i;}
    }
s=A[pmax];
A[pmax]=A[pmin];
A[pmin]=s;
for(i=0;i<N;i++)
{printf("%d ",A[i]);}
return 0;}

#include<stdio.h>
int main()
{int N,A[100000],B[100000],i,j,a,b;
scanf("%d",&N);
for(i=0;i<N;i++)
{scanf("%d",&A[i]);
a=a+A[i];}
for(j=0;j<N;j++)
{scanf("%d",&B[j]);
b=b+B[j];}
if(a==b)
printf("yes");
else
    printf("no");
return 0;}

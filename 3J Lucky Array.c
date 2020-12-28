#include<stdio.h>
int main()
{int N,A[N],i,min,f=1;
scanf("%d",&N);
for(i=0;i<N;i++)
{scanf("%d",&A[i]);}
min=A[0];
for(i=1;i<N;i++)
{if(A[i]<min)
{min=A[i];
f=1;}
else if(A[i]==min)
f++;}
if(f%2==0)
    printf("UnLucky");
else
    printf("Lucky");
return 0;   }

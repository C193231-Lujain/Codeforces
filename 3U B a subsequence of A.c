#include<stdio.h>
int main()
{int N,M,A[100000],B[100000],i,j,count=0;
scanf("%d %d",&N,&M);
for(i=0;i<N;i++)
{scanf("%d",&A[i]);}
for(i=0;i<M;i++)
{scanf("%d",&B[i]);}
for(i=0,j=0;i<N;i++)
{if(B[j]==A[i])
{count++;
j++;}
      }
if(count==M)
    printf("YES");
else
    printf("NO");
return 0;}

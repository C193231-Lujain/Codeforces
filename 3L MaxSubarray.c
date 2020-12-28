#include<stdio.h>
int main()
{int T,N,i,j,k,l,max,A[10000];
scanf("%d",&T);
for(i=0;i<T;i++)
{  scanf("%d",&N);
for(j=0;j<N;j++)
{  scanf("%d",&A[i]);
   }
for(k=1;k<=N;k++)
    {for(i=0;i<N-k+1;i++)
    {max=A[i];
    for(l=0;l<k;l++)
    {if(max<A[i+l])
    {max=A[i+l];  }
   }
 printf("%d",max);}
}
printf("\n");}
return 0;}

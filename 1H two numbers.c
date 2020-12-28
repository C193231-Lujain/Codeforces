#include<stdio.h>
#include<math.h>
int main()
{int A,B,a,b,c;
scanf("%d %d",&A,&B);
a=floor((double)A/(double)B);
b=ceil((double)A/(double)B);
c=round((double)A/(double)B);
printf("floor %d / %d = %d\n",A,B,a);
printf("ceil %d / %d = %d\n",A,B,b);
printf("round %d / %d = %d\n",A,B,c);
return 0;}

#include<stdio.h>
int main()
{long long A,B,C,D,m,r;
scanf("%lld %lld %lld %lld",&A,&B,&C,&D);
m=A*B*C*D;
r=m%100;
printf("%lld",r);
return 0;}

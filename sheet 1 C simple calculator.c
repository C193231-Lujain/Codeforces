#include<stdio.h>
#include<math.h>
int main()
{int sum,sub;
long long int X,Y,m;
scanf("%lld %lld",&X,&Y);
sum=X+Y;
m=X*Y;
sub=X-Y;
printf("%lld + %lld = %d\n",X,Y,sum);
printf("%lld * %lld = %lld\n",X,Y,m);
printf("%lld - %lld = %d\n",X,Y,sub);
return 0;
}

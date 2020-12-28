#include<stdio.h>
int main()
{int N,y,m,d;
scanf("%d",&N);
y=(int)N/365;
N=N-(365*y);
m=(int)N/30;
d=(int)N-(m*30);
printf("%d years\n%d months\n%d days",y,m,d);
return 0;
}

#include<stdio.h>
int main()
{int a,b,c,min1,min2,max1,max2;
scanf("%d %d %d",&a,&b,&c);
min1=(a<b)?a:b;
min2=(min1<c)?min1:c;
max1=(a>b)?a:b;
max2=(max1>c)?max1:c;
printf("%d %d",min2,max2);
return 0;}

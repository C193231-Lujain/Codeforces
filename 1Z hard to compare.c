#include<stdio.h>
#include<math.h>
int main()
{long A,C;
long long B,D;
double r,result;
scanf("%ld %lld %ld %lld",&A,&B,&C,&D);
result=B*log(A);
r=D*log(C);
if(result>r)
printf("YES");
else
    printf("NO");
return 0;}

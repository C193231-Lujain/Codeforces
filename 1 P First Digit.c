#include<stdio.h>
int main()
{int X,first;
scanf("%d",&X);
if(X>999&&X<=9999)
{first=X;
while(first>=10)
{first=first/10;
}
if(first%2==0)
    printf("EVEN");
    else
        printf("ODD");}
return 0;}

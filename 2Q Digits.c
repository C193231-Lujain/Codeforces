#include<stdio.h>
#include<string.h>
int main()
{int T,i,l;
char name[100];
scanf("%d",&T);
while(T--)
{scanf("%s",name);
l=strlen(name)-1;
for(i=l-1;i>=0;i--)
{printf("%c",name[i]);}
printf("\n");}
return 0;}

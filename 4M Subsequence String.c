#include<stdio.h>
#include<string.h>
int main()
{char S[1000],s[5]="hello";
int i,j,len;
gets(S);
len=strlen(S);
for(i=0,j=0;i<len;i++,j++)
{if(S[i]==s[j])
j++;
}
if(j>=5)
    printf("YES");
    else
        printf("NO");
return 0;}

#include<stdio.h>
#include<string.h>
int main()
{char S[1000];
int i,f[26]={0};
gets(S);
for(i=0;S[i]!='\0';i++)
{if(S[i]>='a'&&S[i]<='z')
{f[S[i]-'a']++;}
}
for(i=0;i<26;i++)
{if(f[i]!=0)
{
printf("%c : %d\n",(i+'a'),f[i]);
}
}
return 0;}





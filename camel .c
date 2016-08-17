#include<stdio.h>
#include<string.h>
int main()
{
char s[10];
int i,len;
len=strlen(s);
for(i=0;i<len;i++)
{
if(s[i]<='a'&&s[i]>='z')
s[i]=s[i]-32;
else
s[i]=s[i]+32;
}
for(i=0;i<len;i++)
{
printf("%s",s[i]);
}
return 0;
}

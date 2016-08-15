#include<stdio.h>
#include<string.h>
int main()
{
char s[100];
int i,temp,len;
scanf("%s",s);
len=strlen(s);
for(i=0;i<len;i++)
{
temp=s[i];
s[i]=s[i+1];
s[i+1]=temp;
printf("%s",s[i]);
}
return 0;

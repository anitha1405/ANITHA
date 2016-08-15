#include<stdio.h>
#include<string.h>
int main()
{
char s[10];
int len,i,a[100];
scanf("%s",s);
len=strlen(s);
for(i=0;i<len;i++)
{
a[i]=((int)(s[i]))

printf("%d",a[i]);
}
return 0;
}

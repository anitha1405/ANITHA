#include<stdio.h>
#include<string.h>
int main()
{
char a[100];b[100];
int len1,len2,i,j,c=0;c1=0;
scanf("%s,a);
scanf("%s",b);
for(i=0;i<len1;i++)
{
if(a[i]==a[i+1])
c++;
}
for(j=0;j<len2;j++)
{
if(b[j]==b[j+1])
c1++;
}
if(c==c1)
printf("true");
else
printf("false");
return 0;
}

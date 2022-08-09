#include<stdio.h>
int main()
{
int n=10;
for(int i=18;i>=0;i--)
{
if(i%2==0)
{
printf("%d ",i);
n--;
}
if(n<0)
break;
}
return 0;
}

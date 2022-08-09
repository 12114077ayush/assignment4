#include<stdio.h>
int main()
{int x;
printf("enter the number of odd numbers to printed");
scanf("%d",&x);
int i=1;
for(int N=0;N<x;N++)
{
 if(i%2!=0)
 {
   printf("%d ",i);
   i+=2;
 }
}
return 0;
}

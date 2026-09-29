#include<stdio.h>
int main()
{
 int a,n,result;
 printf("enter first number;");
 scanf("%d",&a);
 printf("enter shift position;");
scanf("%d",&n);
result=a<<n;
printf("left shift result=%d",result);
 return 0;
}


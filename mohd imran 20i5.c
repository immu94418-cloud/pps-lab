#include<stdio.h>
int main()
{
int n,original,remainder,reverse=0;
printf("enter a number:");
scanf("%d",&n);
original=n;
while(n!=0)
{
remainder=n%10;
reverse=reverse*10+remainder;
n=n/10;
}
if(reverse==original)
printf("%d is an palindrome number.",original);
else
printf("%d is not an palindrome number.",original);
return 0;
}










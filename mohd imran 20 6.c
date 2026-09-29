#include<stdio.h>
int main()
{
int choice;
int a=10,b=5;
printf("1.addition\n");
printf("2.subtraction\n");
printf("3.multiplication\n");
printf("4.division\n");
printf("enter your choice");
scanf("%d",&choice);
switch(choice)
{
case1:
printf("sum=%d",a+b);
break;
case2:
printf("difference=%d",a-b);
break;
case3:
printf("product=%d",a*b);
break;
case4:
printf("division=%d,a/b");
break;
default:
printf("invalid choice");
}
return 0;
}

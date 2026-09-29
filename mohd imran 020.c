 #include<stdio.h>
 {
 int n,i,fact;
printf("enter number:");
scanf("%d",&n);
 fact=1;
 for(i=1;i<=n;i++)
 {
 fact=fact*i;
 }
 printf("factorial=%d",fact);
 return 0;
 }

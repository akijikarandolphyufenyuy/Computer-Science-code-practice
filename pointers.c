#include<stdio.h>
int main()
{
int a,b,c;
int *p;
p=&a;
printf("enter the first number please:");
scanf("%d",&a);
printf("enter the second number please:");
scanf("%d",&b);
c=a+b;
printf("the memory location of variable a is:%x\n",&a);
printf("the pointer location of a is %x\n",p);
printf("the value stored in p for now is given by:%d\n",*p);
printf("the memory location of variable b is:%x\n",&b);
printf("the memory location of variable c is:%x\n",&c);
printf("the sum of the two numbers is %d\n",c);
return 0;





}

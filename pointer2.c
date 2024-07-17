#include<stdio.h>
int main()
{int a=9;
int *p,b=10,*t;
p=&a;
t=&b;
printf("the memory location of variable a is:%x\n",&a);
printf("the pointer memory location of variable a is:%x\n",p);
a=19;
printf("the value stored in the memory location:%x\n is %d\n",&a,*p);
printf("*******************************************************\n");
printf("the memory location of variable b is:%x\n",&b);
printf("the pointer memory location of variable b is:%x\n",t);
b=11;
printf("the value stored in the memory location:%x\n is %d\n",&b,*t);

    return 0;
}
